/*
Q2. Doubly Linked List (DLL) - Creation of 3 Nodes.
*/

#include <stdio.h>
#include <stdlib.h>
struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void create(){
    struct Node *first=(struct Node*)malloc(sizeof(struct Node));
    struct Node *second=(struct Node*)malloc(sizeof(struct Node));
    struct Node *third=(struct Node*)malloc(sizeof(struct Node));
    first->data=10;second->data=20;third->data=30;
    first->prev=NULL;first->next=second;
    second->prev=first;second->next=third;
    third->prev=second;third->next=NULL;
    head=first;
}
int main(){
    create();
    return 0;
}
