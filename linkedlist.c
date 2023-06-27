#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* ---------- Node Structure ----------*/
struct node {
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

/* ---------- Display the list ---------- */
void printList() {
    struct node *p = head;
    printf("\n[");

    // Start from the beginning 
    while (p != NULL){
        printf(" %d ", p->data);
        p = p->next;
    }
    printf("]");
}

/* ---------- Insertion at the beginning ---------- */
void insertatbegin(int data) {
    // Create a link 
    struct node *lk = (struct node*) malloc(sizeof(struct node));
    lk->data = data;

    // Point it to old first node 
    lk->next = head;

    // Point first to new first node 
    head = lk;
}

/* ---------- Insertion at the beginning ---------- */
void insertatend(int data) {
    // Create a link 
    struct node *lk = (struct node*) malloc(sizeof(struct node));
    lk->data = data;
    struct node *linkedlist = head;

    // Point it to old first node 
    while (linkedlist->next == NULL) {
        linkedlist = linkedlist->next;
    }

    
    // Point first to new first node 
    linkedlist->next = lk;
}

/* ---------- Main Function ---------- */
void main(void) {
    int k = 0;
    insertatbegin(12);
    insertatend(22);
    // insertatend(30);
    // insertatend(14);
    // insertatend(32);
    printf("Linked List: ");
    printList();

}