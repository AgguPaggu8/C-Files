#include <stdio.h>
#include <ctype.h>
int main(){
    // C = (F - 32) * 5 / 9
    float C, F, z;
    char type;
    printf("Temperature converter!\n");
    printf("Please input your temperature type (C) or (F):");
    scanf(" %c", &type);
    type = toupper(type);
    printf("You have chose %c\n", type);
    if(type == 'F'){
        printf("We will convert F to C!\n");
        printf("Input temperature in F:");
        scanf("%f", &F);
        z = (F - 32) * 5 / 9;
        printf("%.1f F in C is:%.1f", F, z);
    }
    else if(type == 'C'){
        printf("We will convert C to F!\n");
        printf("Input temperature in C:");
        scanf("%f", &C);
        z = C * 9 / 5 + 32;
        printf("%.1f C in F is:%.1f", C, z);
    }
    else{
        printf("\nPlease input a valid Temperature type (F) or (C)");
    }
    printf("\nThankyou for using Temperature converter by Agyey Kalia!");
    return 0;
}