#include <stdio.h>

int main(){
    int array[10]; // it works once
    for(int i=0; i<=9; i++){ // works 21 times , Q(n) = 1
        printf("please enter the %d .index values with in array:",i); //ıt works once
        scanf("%d",&array[i]); // works 10 times
        printf("\n"); // works 10 times  
    }
    for(int k=0; k<=9; k++){ // works 21 times , Q(n) = 1
        printf("you departure the %d. index values with in the array:%d\n",k,array[k]); // works 10 times
        
    }
    return 0; // it works once
    // S(n) = Q(n) 
}