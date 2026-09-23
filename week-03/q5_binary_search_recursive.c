/*
Q5. WAP to perform recursive Binary Search on an array.
*/

#include <stdio.h>
int rec_binSearch(int arr[],int low,int high,int x){
    if(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]>x){
            return rec_binSearch(arr,low,mid-1,x);
        }
        return rec_binSearch(arr,mid+1,high,x);
    }
    return -1; //not found
}
int main(){
    int a[50],n,k;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d sorted elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element to be searched: ");
    scanf("%d",&k);
    int res=rec_binSearch(a,0,n-1,k);
    if(res!=-1){
        printf("Element %d found at index %d\n",k,res);
    }
    else{
        printf("Element %d not found\n",k);
    }
    return 0;
}
