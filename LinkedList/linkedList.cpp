#include <bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node *next;
    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val) {
    node* n = new node(val);
    if (head == NULL) {
        head = n;  // If the list is empty, set the new node as head
        return;
    }
    node* temp = head;
    while (temp->next != NULL) {  // Traverse to the end of the list
        temp = temp->next;
    }
    temp->next = n;  // Attach new node at the tail
}

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {  // Traverse and print the list
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    
    // Display the linked list
    display(head);

    return 0;
}
