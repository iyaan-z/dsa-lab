/*
Q5. Circular Linked List (CLL) - Insertion at the End.
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
    first->next=second;
    second->next=third;
    third->next=first;
    head=first;
}
void traversal(){ //from q3
    if(head==NULL){
        printf("List is empty\n");
        return;
    }
    struct Node *temp=head;
    do{
        printf("%d -> ",temp->data);
        temp=temp->next;
    }while(temp!=head);
    printf("(head)\n");
}
void insertE(int data){
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    if(head==NULL){
        newNode->next=newNode;
        head=newNode;
        return;
    }
    struct Node *curr=head;
    while(curr->next!=head){
        curr=curr->next;
    }
    curr->next=newNode;
    newNode->next=head;
}
int main(){
    create();
    printf("CLL before insertion: ");
    traversal();
    insertE(40);
    printf("CLL after insertion: ");
    traversal();
    return 0;
}
