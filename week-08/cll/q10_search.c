/*
Q10. Circular Linked List (CLL) - Searching.
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
void search(int key){
    if(head==NULL) return;
    struct Node *curr=head;
    int pos=1;
    do{
        if(curr->data==key){
            printf("Found at %d\n",pos);
            return;
        }
        curr=curr->next;
        pos++;
    }while(curr!=head);
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
