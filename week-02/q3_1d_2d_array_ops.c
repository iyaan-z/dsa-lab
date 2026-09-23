/*
Q3. Input one 1-D array, one 2D array, access 1 element from both and also demonstrate traversing.
*/

#include <stdio.h>
int main(){
    int n,r,c;
    printf("1-D Array Input:- "); //For 1-D Array
    printf("Enter size: ");
    scanf("%d",&n);
    int one[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&one[i]);
    }
    printf("2-D Array Input:- "); //For 2-D Array
    printf("Enter rows: ");
    scanf("%d",&r);
    printf("Enter columns: ");
    scanf("%d",&c);
    int two[r][c];
    printf("Enter %d elements:\n",r*c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&two[i][j]);
        }
    }
    printf("Accessing One element from both:- ");
    if(n>0){
        printf("Element at 1-D array index [0]: %d\n",one[0]);
    }
    if(r>0&&c>0){
        printf("Element at 2-D array index [0][0]: %d\n",two[0][0]);
    }
    printf("Traversing 1-D Array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",one[i]);
    }
    printf("\n");
    printf("Traversing 2-D Array:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",two[i][j]);
        }
        printf("\n");
    }
    return 0;
}
