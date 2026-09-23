/*
Q4. Implement modified Bubble Sort using a swap flag.
*/

#include <stdio.h>
void modBubble(int arr[],int size){
    for(int step=0;step<size-1;step++){
        int swapped=0; //flag
        for(int i=0;i<size-step-1;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                swapped=1;
            }
        }
        if(swapped==0){
            break;
        }
    }
}
int main(){
    int data[]={1,2,3,4,6,5,7};
    int size=sizeof(data)/sizeof(data[0]);
    modBubble(data,size);
    printf("Sorted Array:\n");
    for(int i=0;i<size;i++){
        printf("%d ",data[i]);
    }
    printf("\n");
    return 0;
}
