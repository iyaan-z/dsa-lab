/*
Q9. Circular Linked List (CLL) - Deletion from the Middle.
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
void deleteB(){ //from q6
    if(head==NULL) return;
    if(head->next==head){
        free(head);
        head=NULL;
        return;
    }
    struct Node *curr=head;
    while(curr->next!=head){
        curr=curr->next;
    }
    struct Node *temp=head;
    curr->next=head->next;
    head=head->next;
    free(temp);
}
void deletePos(int pos){
    if(pos<1||head==NULL) return;
    if(pos==1){deleteB();return;}
    struct Node *curr=head;
    for(int i=1;i<pos-1&&curr->next!=head;i++){
        curr=curr->next;
    }
    if(curr->next==head) return;
    struct Node *temp=curr->next;
    curr->next=temp->next;
    free(temp);
}
int main(){
    create();
    printf("Before deletion: ");
    traversal();
    printf("Deleting Node at position 2.\n");
    deletePos(2);
    printf("After deletion: ");
    traversal();
    return 0;
}
