#include <stdio.h>
int main(){
    int x;
    printf("Today, the user, you, will provide a number and I, the programme, will tell you if its Even or Odd!\n");
    printf("Please enter any digit(1-10000)\n");
    scanf("%d", &x);
    printf("The number you chose is:%d\n", x);
    if(x % 2){
    printf("The number is Odd!");
    }
    else{
    printf("The number is Even!");
    }

    return 0;
}