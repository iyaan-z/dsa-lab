/*
Q9. Singly Linked List (SLL) - Deletion from the middle.
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
void deleteB(){ //from q6
    if(head==NULL) return;
    struct Node *temp=head;
    head=head->next;
    free(temp);
}
void deletePos(int pos){
    if(pos<1||head==NULL) return;
    if(pos==1){deleteB();return;}
    struct Node *curr=head;
    for(int i=1;i<pos-1&&curr!=NULL;i++){
        curr=curr->next;
    }
    if(curr==NULL||curr->next==NULL){
        printf("Invalid Position\n");
        return;
    }
    struct Node *temp=curr->next;
    curr->next=temp->next;
    free(temp);
}
int main(){
    create();
    printf("Before Deletion: ");
    traversal();
    printf("Deleting Node at Position 2.\n");
    deletePos(2);
    printf("After Deletion: ");
    traversal();
    return 0;
}
