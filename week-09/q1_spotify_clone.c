/*
Q1. WAP to implement a Spotify Clone using Linked List.
*/

#include <stdio.h>
#include <stdlib.h>
struct Node{
    char *song;
    struct Node *next,*prev; //prev is NULL initially as SLL
};
struct Node *head=NULL;
struct Node *curr=NULL;
int looping=0;
void create(){
    struct Node *first=malloc(sizeof(struct Node));
    struct Node *second=malloc(sizeof(struct Node));
    struct Node *third=malloc(sizeof(struct Node));
    first->song="Queen - Bohemian Rhapsody";
    second->song="Michael Jackson - Billie Jean";
    third->song="Lady Gaga - Poker Face";
    head=first;
    first->next=second;first->prev=NULL;
    second->next=third;second->prev=NULL;
    third->next=NULL;third->prev=NULL;
    looping=0;
    curr=head;
}
void loop(){ //evolves to circular
    struct Node *temp=head;
    while(temp->next!=NULL) temp=temp->next;
    temp->next=head;head->prev=temp;
    looping=1;
    printf("Loop Enabled\n");
}
void unloop(){ //devolves from circular
    struct Node *temp=head;
    while(temp->next!=head) temp=temp->next;
    temp->next=NULL;head->prev=NULL;
    looping=0;
    printf("Loop Disabled\n");
}
void next(){
    if(curr->next!=NULL){
        curr=curr->next;
        printf("Playing: %s\n",curr->song);
    }
    else{
        printf("End of Playlist\n");
    }
}
void prev(){ //evolves to doubly
    if(head->next&&head->next->prev==NULL){
        struct Node *temp=head;
        while(temp->next!=NULL&&temp->next!=head){
            temp->next->prev=temp;
            temp=temp->next;
        }
    }
    if(curr->prev!=NULL){
        curr=curr->prev;
        printf("Playing: %s\n",curr->song);
    }
    else{
        printf("Start of Playlist\n");
    }
}
int main(){
    create();
    int choice;
    do{
        printf("\n[Linkify | Now Playing: %s]\n",curr->song);
        printf("1 Next Track\n");
        printf("2 Previous Track\n");
        if(!looping) printf("3 Enable Loop\n");
        else printf("3 Disable Loop\n");
        printf("4 Exit\n");
        printf("> ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                next();
                break;
            case 2:
                prev();
                break;
            case 3:
                if(!looping) loop();
                else unloop();
                break;
            case 4:
                printf("Exited Successfully\n");
                return 0;
            default:
                printf("Invalid Choice\n");
                break;
        }
    }while(choice!=4);
    return 0;
}
