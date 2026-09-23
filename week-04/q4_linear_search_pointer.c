/*
Q4. WAP to perform linear search using pointer.
*/

#include <stdio.h>
int linSearch(int *arr,int n,int key){
    for(int i=0;i<n;i++){
        if(*(arr+i)==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,k,res;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    printf("Enter element to search: ");
    scanf("%d",&k);
    res=linSearch(a,n,k);
    if(res!=-1){
        printf("Found at %d\n",res);
    }
    else{
        printf("Element not found\n");
    }
    return 0;
}
