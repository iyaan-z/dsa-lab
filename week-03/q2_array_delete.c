/*
Q2. WAP to delete an element from an array.
*/

#include <stdio.h>
int del(int arr[],int n,int pos){
    if(n<=0){
        printf("Empty array.\n");
        return n;
    }
    if(pos<0||pos>=n){
        printf("Invalid position.\n");
        return n;
    }
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1]; //shifts element to left
    }
    return n-1; //updates element count
}
int main(){
    int a[50],n,p;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter index to delete: ");
    scanf("%d",&p);
    n=del(a,n,p);
    printf("Array after deletion: ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
