/*
Q10. Doubly Linked List (DLL) - Searching.
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
void search(int k){
    struct Node *curr=head;
    int pos=1;
    while(curr!=NULL){
        if(curr->data==k){
            printf("Found at %d\n",pos);
            return;
        }
        curr=curr->next;
        pos++;
    }
    printf("Not found\n");
}
int main(){
    create();
    printf("Searching for 20: ");
    search(20);
    printf("Searching for 67: ");
    search(67);
    return 0;
}
