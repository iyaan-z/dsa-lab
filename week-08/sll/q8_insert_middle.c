/*
Q8. Singly Linked List (SLL) - Insertion in the middle.
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
void insertB(int data){ //from q4
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL){
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data=data;
    newNode->next=head;
    head=newNode;
}
void insertPos(int data,int pos){
    if(pos<1){
        printf("Invalid position\n");
        return;
    }
    if(pos==1){
        insertB(data);
        return;
    }
    struct Node *curr=head;
    for(int i=1;i<pos-1&&curr!=NULL;i++){
        curr=curr->next;
    }
    if(curr==NULL){
        printf("Invalid position\n");
        return;
    }
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    if(newNode==NULL){
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data=data;
    newNode->next=curr->next;
    curr->next=newNode;
}
int main(){
    create();
    printf("Before Insertion: ");
    traversal();
    printf("Inserting 25 at position 3.\n");
    insertPos(25,3);
    printf("After Insertion: ");
    traversal();
    return 0;
}
