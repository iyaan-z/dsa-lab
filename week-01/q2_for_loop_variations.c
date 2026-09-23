/*
Q2. Playing with for loop.
*/

#include <stdio.h>
int main(){
    int i;

    //Baseline Loop
    for(i=0;i<5;i++){
        printf("DSA\n");
    }

    //NOTE: Uncomment one loop at a time to test for its output

    //Variant A: Missing Initialization
    /*
    for(;i<5;i++){
        printf("DSA\n");
    }
    */

    //Variant B: Missing Condition
    /*
    for(i=0;;i++){
        printf("DSA\n");
    }
    */

    //Variant C: Missing Update
    /*
    for(i=0;i<5;){
        printf("DSA\n");
    }
    */

    //Variant D: No Arguments
    /*
    for(;;){
        printf("DSA\n");
    }
    */

    return 0;
}
