/*
Q2. WAP to give input (Array, LL, Tree, Graph) & tell its type.
*/

#include <stdio.h>
#include <string.h>
int main(){
    char ds[25];
    printf("Enter a data structure (Array, LL, Tree, Graph): ");
    scanf("%14s",ds);
    if(strcmp(ds,"Array")==0||strcmp(ds,"array")==0||strcmp(ds,"LL")==0||strcmp(ds,"ll")==0){
        printf("Type: Linear Data Structure\n");
    }
    else if(strcmp(ds,"Tree")==0||strcmp(ds,"tree")==0||strcmp(ds,"Graph")==0||strcmp(ds,"graph")==0){
        printf("Type: Non-Linear Data Structure\n");
    }
    return 0;
}
