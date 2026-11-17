/*
Q3. Take an array of 9 elements. Try searching for an element, and if it is found in the middle of the array, return the index, and sort the left side in descending order using a sorting algorithm that is worst case and sort the right side using a sorting algorithm that is best case. If the element is not found in the middle, insert the element in the middle index and then sort the entire array in ascending using best case algorithm.
*/

#include <stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int binSearchMid(int arr[],int low,int high,int t){
    int mid=low+(high-low)/2;
    if(arr[mid]==t){
        return mid;
    }
    return -1;
}
void bubbled(int arr[],int start,int end){
    int n=end-start+1;
    for(int step=0;step<n-1;step++){
        for(int j=start;j<end-step;j++){
            if(arr[j]<arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void merged(int arr[],int left,int mid,int right){
    int n1=mid-left+1;
    int n2=right-mid;
    int L[10],R[10];
    for(int i=0;i<n1;i++) L[i]=arr[left+i];
    for(int j=0;j<n2;j++) R[j]=arr[mid+1+j];
    int i=0,j=0,k=left;
    while(i<n1&&j<n2){
        if(L[i]>=R[j]){
            arr[k++]=L[i++];
        }
        else{
            arr[k++]=R[j++];
        }
    }
    while(i<n1) arr[k++]=L[i++];
    while(j<n2) arr[k++]=R[j++];
}
void mSortd(int arr[],int left,int right){
    if(left<right){
        int mid=left+(right-left)/2;
        mSortd(arr,left,mid);
        mSortd(arr,mid+1,right);
        merged(arr,left,mid,right);
    }
}
void inSorta(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[]={2,4,6,8,10,12,14,16,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;
    printf("Original array: ");
    display(arr,n);
    printf("Enter target element: ");
    scanf("%d",&target);
    int mid=n/2;
    int index=binSearchMid(arr,0,n-1,target);
    if(index!=-1){
        printf("Element found at middle index: %d\n",index);
        printf("Bubble Sorting (Left) and Merge Sorting (Right)\n");
        bubbled(arr,0,mid-1);
        mSortd(arr,mid+1,n-1);
    }
    else{
        printf("Element not found at middle index. Replacing middle element.\n");
        printf("Insertion Sorting (Entire Array).\n");
        arr[mid]=target;
        inSorta(arr,n);
    }
    printf("Sorted array: ");
    display(arr,n);
    return 0;
}
