#include <stdio.h>
int main(){
    double guess;
    printf("Hello! Welcome to a game!\n");
    printf("Today, I, the programme will guess the number\n");
    printf("that you, the user will input!\n");
    printf("Now, you must enter your guess, my guess will\n");
    printf("be random, by luck, ill guess your number :)\n");
    printf("Enter your number:\n");
    scanf("%lf", &guess);
    printf("Was your number: %.0lf?\n" , guess);
    printf("I hope you enjoyed! Take care!");
    return 0;
}