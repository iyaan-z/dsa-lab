/*
Q8. Doubly Linked List (DLL) - Insertion in the middle.
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
void insertB(int data){ //from q4
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->prev=NULL;
    newNode->next=head;
    if(head!=NULL){
        head->prev=newNode;
    }
    head=newNode;
}
void insertPos(int data,int pos){
    if(pos<1) return;
    if(pos==1){insertB(data);return;}
    struct Node *curr=head;
    for(int i=1;i<pos-1&&curr!=NULL;i++){
        curr=curr->next;
    }
    if(curr==NULL) return;
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=curr->next;
    newNode->prev=curr;
    if(curr->next!=NULL) curr->next->prev=newNode;
    curr->next=newNode;
}
int main(){
    create();
    printf("Before Insertion: ");
    traverseF();
    printf("Inserting 25 at Position 3.\n");
    insertPos(25,3);
    printf("After Insertion: ");
    traverseF();
    return 0;
}
