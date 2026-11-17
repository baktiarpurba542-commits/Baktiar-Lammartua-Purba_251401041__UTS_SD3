#include <iostream>
using namespase std;

struct Node {
    int data;
    Node* next;
}

Node = head = NULL;

void insertTerurut(int nilai){
    Node* baru = New Node;
    baru->data = nilai;
    baru->next = NULL;

    if ( head == NULL || nilai < head->data){
        baru->next = head;
        head = baru;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL && temp->next->data < nilai ){
        temp = temp->next;
    }
    baru->next = temp->next;
    temp->next = next;

}

void HapusDibawahBatas(int batas){
    while (temp->next != NULL && head->data < batas){
        Node* baru = New Node;
        baru->data = nilai;
        baru->next = NULL
    }
}