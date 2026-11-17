/*
Q9. Doubly Linked List (DLL) - Deletion from the Middle.
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
void deleteB(){ //from q6
    if(head==NULL) return;
    struct Node *temp=head;
    head=head->next;
    if(head!=NULL) head->prev=NULL;
    free(temp);
}
void deletePos(int pos){
    if(pos<1||head==NULL) return;
    if(pos==1){deleteB();return;}
    struct Node *curr=head;
    for(int i=1;i<pos&&curr!=NULL;i++){
        curr=curr->next;
    }
    if(curr==NULL) return;
    if(curr->next!=NULL) curr->next->prev=curr->prev;
    if(curr->prev!=NULL) curr->prev->next=curr->next;
    free(curr);
}
int main(){
    create();
    printf("Before Deletion: ");
    traverseF();
    printf("Deleting Node at Position 2.\n");
    deletePos(2);
    printf("After Deletion: ");
    traverseF();
    return 0;
}
