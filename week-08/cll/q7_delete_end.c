/*
Q7. Circular Linked List (CLL) - Deletion at the End.
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
void deleteE(){
    if(head==NULL) return;
    if(head->next==head){
        free(head);
        head=NULL;
        return;
    }
    struct Node *curr=head;
    while(curr->next->next!=head){
        curr=curr->next;
    }
    struct Node *temp=curr->next;
    curr->next=head;
    free(temp);
}
int main(){
    create();
    printf("CLL before deletion: ");
    traversal();
    deleteE();
    printf("CLL after deletion: ");
    traversal();
    return 0;
}
