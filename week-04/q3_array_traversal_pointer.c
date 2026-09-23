/*
Q3. WAP to traverse an array using pointer.
*/

#include <stdio.h>
void trav(int *arr,int n){
    printf("Traversing array using pointer:\n");
    for(int i=0;i<n;i++){
        printf("Index: %d, Value: %d, Address: %p\n",i,*(arr+i),arr+i);
    }
}
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    printf("\n");
    trav(a,n);
    return 0;
}
