#include<iostream>
using namespace std;

class Node {
    public: 
        int data;
        Node* next;
};

void insertAtHead(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void push(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void print(Node* node){
    while(node != NULL){
        cout <<  " " << node->data;
        node = node->next;
    }
    cout << endl;
}

int main() {

    Node* head = NULL;

    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);

    cout << "Created Linked List is ";
    print(head);

    insertAtHead(&head, 1);
    cout << "After Inserting at Head: ";
    print(head);


    return 0;
}
