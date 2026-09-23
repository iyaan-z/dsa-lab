/*
Q3. WAP to perform Linear Search on an array.
*/

#include <stdio.h>
int linSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i; //found
        }
    }
    return -1; //not found
}
int main(){
    int a[50],n,k;
    printf("Enter number of Elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched: ");
    scanf("%d",&k);
    int res=linSearch(a,n,k);
    if(res!=-1){
        printf("Element %d found at index %d\n",k,res);
    }
    else{
        printf("Element %d not found\n",k);
    }
    return 0;
}
