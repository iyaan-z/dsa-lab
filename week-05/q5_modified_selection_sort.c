/*
Q5. Implement modified Selection Sort (min_idx & max_idx together).
*/

#include <stdio.h>
void modSelection(int arr[],int size){
    int l=0; //left boundary
    int r=size-1; //right boundary
    while(l<r){
        int min_idx=l;
        int max_idx=l;
        for(int i=l;i<=r;i++){
            if(arr[i]<arr[min_idx]){
                min_idx=i;
            }
            if(arr[i]>arr[max_idx]){
                max_idx=i;
            }
        }
        //swap min element with left boundary
        int temp=arr[l];
        arr[l]=arr[min_idx];
        arr[min_idx]=temp;
        if(max_idx==l){
            max_idx=min_idx;
        }
        //swap max element with right boundary
        temp=arr[r];
        arr[r]=arr[max_idx];
        arr[max_idx]=temp;
        l++;
        r--;
    }
}
int main(){
    int data[]={7,4,9,2,3,5,1,6};
    int size=sizeof(data)/sizeof(data[0]);
    modSelection(data,size);
    printf("Sorted Array:\n");
    for(int i=0;i<size;i++){
        printf("%d ",data[i]);
    }
    printf("\n");
    return 0;
}
