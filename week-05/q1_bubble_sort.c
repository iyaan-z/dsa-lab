/*
Q1. Implement Bubble Sort.
*/

#include <stdio.h>
void bubbleSort(int arr[],int size){
    for(int step=0;step<size-1;step++){
        for(int i=0;i<size-step-1;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
int main(){
    int data[]={6,4,7,1,9,5,3};
    int size=sizeof(data)/sizeof(data[0]);
    bubbleSort(data,size);
    printf("Sorted Array:\n");
    for(int i=0;i<size;i++){
        printf("%d ",data[i]);
    }
    printf("\n");
    return 0;
}
