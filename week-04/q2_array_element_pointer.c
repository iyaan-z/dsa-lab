/*
Q2. WAP to access 1 element of an array using pointer
*/

#include <stdio.h>
void access(int *arr,int n,int key){
    if(key>=0&&key<n){
        printf("Value at index %d = %d\n",key,*(arr+key));
    }
    else{
        printf("Invalid index\n");
    }
}
int main(){
    int a[]={5,7,9,11,71};
    int n=sizeof(a)/sizeof(a[0]);
    int in;
    printf("Array : ");
    for(int i=0;i<n;i++){
        printf("%d ",*(a+i));
    }
    printf("\n");
    printf("Enter index to access (0 to %d): ",n-1);
    scanf("%d",&in);
    access(a,n,in);
    return 0;
}
