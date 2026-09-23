/*
Q2. Implement Quick Sort.
*/

#include <stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int part(int arr[],int low,int high){
    int pivot=arr[high];
    int i=(low-1);
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return(i+1);
}
void quick(int arr[],int low,int high){
    if(low<high){
        int p=part(arr,low,high);
        quick(arr,low,p-1);
        quick(arr,p+1,high);
    }
}
int main(){
    int data[]={6,4,7,8,67,1,9,5,3,2};
    int size=sizeof(data)/sizeof(data[0]);
    printf("Unsorted:\n");
    for(int i=0;i<size;i++){
        printf("%d ",data[i]);
    }
    quick(data,0,size-1);
    printf("\nSorted:\n");
    for(int i=0;i<size;i++){
        printf("%d ",data[i]);
    }
    return 0;
}
