/*
Q8. Circular Linked List (CLL) - Insertion in the Middle.
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
void insertB(int data){ //from q4
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
    newNode->next=head;
    curr->next=newNode;
    head=newNode;
}
void insertPos(int data,int pos){
    if(pos<1) return;
    if(pos==1){insertB(data);return;}
    struct Node *curr=head;
    for(int i=1;i<pos-1&&curr->next!=head;i++){
        curr=curr->next;
    }
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=curr->next;
    curr->next=newNode;
}
int main(){
    create();
    printf("Before insertion: ");
    traversal();
    printf("Inserting 25 at position 3.\n");
    insertPos(25,3);
    printf("After insertion: ");
    traversal();
    return 0;
}
