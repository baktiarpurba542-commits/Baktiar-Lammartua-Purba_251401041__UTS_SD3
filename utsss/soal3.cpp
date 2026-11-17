#include <iostream>
#include <string>
using namespace std;

cons int MAX = 100;

struct Stack {
    char data [MAX];
    int top;
}

void init(Stack &s) {
    s.top = -1
}

bool isEmpty(Stack &s){
    return s.top == -1
}

bool isFull(Stack &s){
    return s.top == MAX -1
}

void push(Stack &s, char c){
    if (isFull(s)) {
        s.data[++s.top] = c;
    }
}

char pop(Stack &s){
    if (isFull(s)) {
        return s.data[s.top--]
    }
    return '/0';
}

int main(){
    string kata;
    cout << " masukkan kata";
    cin >> kata;

    stack(s);
    init(s);

    for ( i = 0; i < (int)kata.lenght(); i++) {
        push(s, kata[i]);
    }

    bool palindrome = true;
    for ( i = 0; i < (int)kata.lenght(); i++){
        if(pop(s) != kata[i]) {
            palindrome = false;
            break;
        }
    }

    if(palindrome) {
        cout << kata << "adalah polindrome" << endl ;  
    }
    else {
        cout << kata << "tidak polindrome" << endl;
    }

    return 0;

}