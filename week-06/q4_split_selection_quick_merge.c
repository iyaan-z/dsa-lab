/*
Q4. Take an unsorted array and split into two halves:
i) Sort first half using an algorithm that sorts the smallest element first.
ii) Sort second half using an algorithm that shifts at least one element to its final sorted position after each iteration.
Once both halves are sorted, combine them into a single sorted array.
*/

#include <stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void display(int arr[],int low,int high){
    for(int i=low;i<=high;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void selection(int arr[],int size){
    for(int step=0;step<size-1;step++){
        int min_idx=step;
        for(int i=step+1;i<size;i++){
            if(arr[i]<arr[min_idx]){
                min_idx=i;
            }
        }
        swap(&arr[min_idx],&arr[step]);
    }
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
void merge(int arr[],int p,int q,int r){
    int n1=q-p+1;
    int n2=r-q;
    int L[n1],M[n2];
    for(int i=0;i<n1;i++) L[i]=arr[p+i];
    for(int j=0;j<n2;j++) M[j]=arr[q+1+j];
    int i=0,j=0,k=p;
    while(i<n1&&j<n2){
        if(L[i]<=M[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=M[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=M[j];
        j++;
        k++;
    }
}
int main(){
    int data[]={7,4,9,2,3,6,8,67,1,5};
    int size=sizeof(data)/sizeof(data[0]);
    int mid=(size/2)-1;
    printf("Original array:\n");
    display(data,0,size-1);
    printf("\nUnsorted first half:\n");
    display(data,0,mid);
    printf("\nUnsorted second half:\n");
    display(data,mid+1,size-1);
    selection(data,mid+1);
    quick(data,mid+1,size-1);
    printf("\nFirst half after selection sort:\n");
    display(data,0,mid);
    printf("\nSecond half after quick sort:\n");
    display(data,mid+1,size-1);
    merge(data,0,mid,size-1);
    printf("\nAfter merge:\n");
    display(data,0,size-1);
    return 0;
}
