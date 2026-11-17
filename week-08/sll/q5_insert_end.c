/*
Q5. Singly Linked List (SLL) - Insertion at the End.
*/

#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void create(){ //from q2
    struct Node *first=(struct Node*)malloc(sizeof(struct Node));
    struct Node *second=(struct Node*)malloc(sizeof(struct Node));
    struct Node *third=(struct Node*)malloc(sizeof(struct Node));
    first->data=10;second->data=20;third->data=30;
    first->next=second;second->next=third;
    third->next=NULL;
    head=first;
}
void traversal(){ //from q3
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
void insertE(int data){
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL){
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data=data;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
        return;
    }
    struct Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=newNode;
}
int main(){
    create();
    printf("Before Insertion: ");
    traversal();
    insertE(40);
    printf("After Insertion: ");
    traversal();
    return 0;
}
