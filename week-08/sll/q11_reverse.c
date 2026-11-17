/*
Q11. Reversing a Singly Linked List.
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
    first->next=second;second->next=third;third->next=NULL;
    head=first;
}
void reverse(){
    struct Node *prev=NULL;
    struct Node *curr=head;
    struct Node *next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}
void traversal(){ //from q3
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main(){
    create();
    printf("Original SLL:\n");
    traversal();
    reverse();
    printf("Reversed SLL:\n");
    traversal();
    return 0;
}
