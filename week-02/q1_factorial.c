/*
Q1. Factorial using recursion + iteration
*/

#include <stdio.h>
int it_fact(int n){ //iterative approach
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int rec_fact(int n){ //recursive approach
    if(n==0||n==1){
        return 1;
    }
    return n*rec_fact(n-1);
}
int main(){
    int num;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    if(num<0){
        printf("Factorial of a negative number does not exist.\n");
    }
    else{
        printf("Factorial of %d (Iterative) = %d\n",num,it_fact(num));
        printf("Factorial of %d (Recursive) = %d\n",num,rec_fact(num));
    }
    return 0;
}
