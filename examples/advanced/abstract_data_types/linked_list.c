#include <stdio.h>
#include <stdlib.h>

// Define the Node datatype
struct Node {
    int data;
    struct Node* next;
};

// Function to print the linked list
void printList(struct Node* n) {
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}

int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // Allocate 3 nodes in the heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1; // Assign data in first node
    head->next = second; // Link first node with second

    second->data = 2; // Assign data to second node
    second->next = third;

    third->data = 3; // Assign data to third node
    third->next = NULL;

    printList(head);

    return 0;
}