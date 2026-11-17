/*
Q4. Doubly Linked List (DLL) - Insertion at the Beginning.
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
void traverseF(){ //from q3
    struct Node *temp=head;
    printf("Forward: ");
    while(temp!=NULL){
        printf("%d <-> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
void insertB(int data){
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->prev=NULL;
    newNode->next=head;
    if(head!=NULL){
        head->prev=newNode;
    }
    head=newNode;
}
int main(){
    create();
    printf("Before insertion: ");
    traverseF();
    insertB(5);
    printf("After insertion: ");
    traverseF();
    return 0;
}
