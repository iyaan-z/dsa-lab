/*
Q2. Implement Selection Sort.
*/

#include <stdio.h>
void selectionSort(int arr[],int size){
    for(int step=0;step<size-1;step++){
        int min_idx=step;
        for(int i=step+1;i<size;i++){
            if(arr[i]<arr[min_idx]){
                min_idx=i;
            }
        }
        int temp=arr[min_idx];
        arr[min_idx]=arr[step];
        arr[step]=temp;
    }
}
int main(){
    int data[]={7,4,9,2,3,5,1,6};
    int size=sizeof(data)/sizeof(data[0]);
    selectionSort(data,size);
    printf("Sorted Array:\n");
    for(int i=0;i<size;i++){
        printf("%d ",data[i]);
    }
    printf("\n");
    return 0;
}
