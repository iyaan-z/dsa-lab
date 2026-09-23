/*
Q3. Take an array of 10 elements randomly unsorted and implement the sorting algorithm which checks two adjacent elements and swaps them if needed. Perform this sorting for one external loop's iteration, then take this intermediate array and pass it to a sorting function which performs worst when the array is sorted.
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
void bubbleq(int arr[],int size){
    for(int step=0;step<size-1;step++){
        for(int i=0;i<size-step-1;i++){
            if(arr[i]>arr[i+1]){
                swap(&arr[i],&arr[i+1]);
            }
        }
        printf("\nAfter 1 external loop:\n");
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
        quick(arr,0,size-1);
        printf("\nAfter quick sort:\n");
        for(int i=0;i<size;i++){
            printf("%d ",arr[i]);
        }
        break;
    }
}
int main(){
    int data[]={6,4,7,8,67,1,9,5,3,2};
    int size=sizeof(data)/sizeof(data[0]);
    printf("Unsorted:\n");
    for(int i=0;i<size;i++){
        printf("%d ",data[i]);
    }
    bubbleq(data,size);
    return 0;
}
