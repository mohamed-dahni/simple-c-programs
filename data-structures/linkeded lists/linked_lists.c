
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// make a node type and use typedef to get red of the prefix struct
typedef struct Node {
    int x;
    struct Node* next;
} Node;

// prototypes of the functions
Node* create(int val);
Node* insert_first(Node *head, int val);
bool find(Node* head, int val);
void deallocate(Node* head);

int main() {

    Node* head = create(10);
    head = insert_first(head, 9);
    head = insert_first(head, 8);
    head = insert_first(head, 7);
    head = insert_first(head, 6);
    head = insert_first(head, 5);
    head = insert_first(head, 4);
    head = insert_first(head, 3);
    head = insert_first(head, 2);
    head = insert_first(head, 1);

    for(Node* curr = head; curr != NULL; curr = curr->next)
        printf("%d, ", curr->x);
    printf("\n");

    printf("%s\n", find(head, 11) ? "true":"false");

    deallocate(head);

    // exit "success"
    return 0;
}

// create a new node
Node* create(int val) {
    // Dynamically allocate space for a new node
    Node *new_node = (Node*) malloc(sizeof(Node));

    // check to make sure we didn't run out of memory
    if(new_node == NULL) {
        exit(1);
    }

    // initialize the node's val field
    new_node->x = val;
    // initialize the node's next field 
    new_node->next = NULL;
    
    // return the newly created node
    return new_node;
}

// insert an element at the first position
Node* insert_first(Node *head, int val) {
    Node* new_node = create(val);
    new_node->next = head;
    return new_node;
}

// search through a linked list to find an element
bool find(Node* head, int val) {
    // create a traversal pointer pointing to the list's head
    Node* trav = head;

    while(trav != NULL) {
        // if the current node's val field is what we're looking for, report success
        if(trav->x == val) 
            return true;
        else 
            trav = trav->next;
    }
    // if you've reached the end of the list, report failure
    return false;
}

// deallocation of the linked list
void deallocate(Node* head) {
    if(head == NULL) return;

    deallocate(head->next);
    free(head);
}