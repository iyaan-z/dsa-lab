/*
Q3. Doubly Linked List (DLL) - Traversal.
*/

#include <stdio.h>
#include <stdlib.h>
struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void create(){ //from q2
    struct Node *first=(struct Node*)malloc(sizeof(struct Node));
    struct Node *second=(struct Node*)malloc(sizeof(struct Node));
    struct Node *third=(struct Node*)malloc(sizeof(struct Node));
    first->data=10;second->data=20;third->data=30;
    first->prev=NULL;first->next=second;
    second->prev=first;second->next=third;
    third->prev=second;third->next=NULL;
    head=first;
}
void traverseF(){
    struct Node *temp=head;
    printf("Forward: ");
    while(temp!=NULL){
        printf("%d <-> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
void traverseB(){
    if(head==NULL) return;
    struct Node *temp=head;
    while(temp->next!=NULL) temp=temp->next;
    printf("Backward: ");
    while(temp!=NULL){
        printf("%d <-> ",temp->data);
        temp=temp->prev;
    }
    printf("NULL\n");
}
int main(){
    create();
    traverseF();
    traverseB();
    return 0;
}
