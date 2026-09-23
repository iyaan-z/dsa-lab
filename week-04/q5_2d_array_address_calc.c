/*
Q5. WAP using switch-case to find address of a 2-D array.
*/

#include <stdio.h>
int rowMaj(int B,int W,int I,int J,int LR,int LC,int N){
    return B+W*((I-LR)*N+(J-LC));
}
int colMaj(int B,int W,int I,int J,int LR,int LC,int M){
    return B+W*((J-LC)*M+(I-LR));
}
int main(){
    int choice;
    int B,W,I,J,LC,LR,M,N;
    int address;
    printf("1) Row Major\n");
    printf("2) Column Major\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);
    printf("Enter Base Address (B): ");
    scanf("%d",&B);
    printf("Enter Size of data type (W): ");
    scanf("%d",&W);
    printf("Enter Target Row Index (I): ");
    scanf("%d",&I);
    printf("Enter Target Column Index (J): ");
    scanf("%d",&J);
    printf("Enter Lower bound for Row (LR): ");
    scanf("%d",&LR);
    printf("Enter Lower bound for Column (LC): ");
    scanf("%d",&LC);
    printf("Enter Total Rows (M): ");
    scanf("%d",&M);
    printf("Enter Total Columns (N): ");
    scanf("%d",&N);
    switch(choice){
        case 1:
            address=rowMaj(B,W,I,J,LR,LC,N);
            printf("Row Major Address: %d\n",address);
            break;
        case 2:
            address=colMaj(B,W,I,J,LR,LC,M);
            printf("Column Major Address: %d\n",address);
            break;
        default:
            printf("Invalid Choice.\n");
    }
    return 0;
}
