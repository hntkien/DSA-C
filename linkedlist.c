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

/* ---------- Main Function ---------- */
void main(void) {
    int k = 0;
    insertatbegin(12);
    insertatbegin(22);
    insertatbegin(30);
    insertatbegin(44);
    insertatbegin(55);
    printf("Linked List: ");
    printList();

}