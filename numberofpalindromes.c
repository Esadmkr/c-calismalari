#include <stdio.h>
void numberofpalindromes(int number){
    int original = number;
    int opposite = 0;
    while (number>0){
    int remaining = number %10;
    opposite = opposite * 10 + remaining;
    number = number / 10;
    }
    if(original==opposite){
        printf("The number is a palindromels number.");

    }
    else{
        printf("the number is not palindromes number.");
    }
      
}
int main(){
    int number;
    printf("please enter the number:");
    scanf("%d",&number);
    printf("\n");
    numberofpalindromes(number);
    return 0;
}