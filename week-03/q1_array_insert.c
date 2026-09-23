/*
Q1. WAP to insert an element into an array.
*/

#include <stdio.h>
int insert(int arr[],int n,int len,int val,int pos){
    if(n>=len){
        printf("Array is full.\n");
        return n;
    }
    if(pos<0||pos>n){
        printf("Invalid position.\n");
        return n;
    }
    for(int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i]; //shifts element to right
    }
    arr[pos]=val;
    return n+1; //updates element count
}
int main(){
    int a[50];
    int l=sizeof(a)/sizeof(a[0]);
    int n,v,p;
    printf("Enter number of elements (max %d): ",l);
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter value to insert: ");
    scanf("%d",&v);
    printf("Enter position to insert at (0 to %d): ",n);
    scanf("%d",&p);
    printf("\nOriginal array: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    n=insert(a,n,l,v,p);
    printf("Array after insertion: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
