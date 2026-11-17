/*
Q2. Circular Linked List (CLL) - Creation of 3 Nodes.
*/

#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void create(){
    struct Node *first=(struct Node*)malloc(sizeof(struct Node));
    struct Node *second=(struct Node*)malloc(sizeof(struct Node));
    struct Node *third=(struct Node*)malloc(sizeof(struct Node));
    first->data=10;second->data=20;third->data=30;
    first->next=second;
    second->next=third;
    third->next=first;
    head=first;
}
int main(){
    create();
    return 0;
}
