/*
Q7. Singly Linked List (SLL) - Deletion at End.
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
void deleteE(){
    if(head==NULL) return;
    if(head->next==NULL){
        free(head);
        head=NULL;
        return;
    }
    struct Node *curr=head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    free(curr->next);
    curr->next=NULL;
}
int main(){
    create();
    printf("Before Deletion: ");
    traversal();
    deleteE();
    printf("After Deletion: ");
    traversal();
    return 0;
}
