/*
Q1. Implement Stack with array.
*/

#include <stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
int isFull(){
    return top==MAX-1;
}
int isEmpty(){
    return top==-1;
}
void push(int value){
    if(isFull()){
        printf("Stack overflow\n");
    }
    else{
        top++;
        stack[top]=value;
        printf("\nPushed = %d",value);
    }
}
int pop(){
    if(isEmpty()){
        printf("Stack is empty\n");
        return -1;
    }
    else{
        int popped=stack[top];
        top--;
        return popped;
    }
}
int peek(){
    if(isEmpty()){
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}
void display(){
    if(isEmpty()){
        printf("Stack is empty\n");
        return;
    }
    printf("\nStack elements:\n");
    for(int i=top;i>=0;i--){
        printf("%d ",stack[i]);
    }
    printf("\n");
}
int main(){
    pop();
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    printf("\nPopped = %d",pop());
    printf("\nTop element = %d",peek());
    display();
    return 0;
}
