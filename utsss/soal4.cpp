#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* right;
    Node* left;
};

Node* buatNode (int nilai){
    Node* baru = New Node;
    Node* data = nilai;
    Node* right = NULL;
    Node* left = NULL;
    return baru;
}


int main() {
    Node* root = NULL;
    int nilai;

    cout << "Masukkan bilangan (0 untuk berhenti):" << endl;
    while (true) {
        cin >> nilai;
        if (nilai == 0) break;
        root = insert(root, nilai);
    }

    

    return 0;