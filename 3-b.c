
// program to check if the given number is a natural number

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int number;
    printf("Please enter the number: ");
    scanf("%d", &number);

    number >= 1 ? printf("Yes, it is a natural number\n") : printf("No, it is not a natural number\n");

    return 0;
}
