/*
Q1. Playing with pointer.
*/

#include <stdio.h>
void play(){
    int age=25; //'age' is stored at a memory address
    int *p=&age; //p holds address of 'age'
    int **pp=&p; //pp holds address of 'p'
    printf("%d, %d, %d\n",age,*p,**pp);
    (*p)++; //value at address of 'age' increments
    printf("%d, %d\n",age,**pp);
    **pp+=10; //value at address of 'age' increases by 10
    printf("%d, %d, %d\n",age,*p,**pp); //all reflect updated 'age'
    int x=50; //'x' is stored at a new memory address
    *pp=&x; //overwrites p to point to address of 'x' instead
    printf("%d, %d, %d\n",x,*p,**pp);
    (*p)-=5; //value at address of 'x' decrements by 5
    printf("%d, %d, %d\n",x,*p,**pp); //all reflect updated 'x'
    printf("%d, %d\n",age,x); //age remains unaffected while x changes
}
int main(){
    play();
    return 0;
}
