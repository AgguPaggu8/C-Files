#include <stdio.h>
#include <string.h>

int main(){

    int age, number;
    char name[25];

    printf("\nWhat is your name?\n");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0'; // we need to add line 2 and 11 //

    printf("\nWhat is your age?\n");
    scanf("%d", &age);

    printf("\nWhat is your favourite number?\n");
    scanf("%d", &number);

    printf("\nHello %s, you are %d years old! And your favourite number is %d", name, age, number);

    return 0;
}