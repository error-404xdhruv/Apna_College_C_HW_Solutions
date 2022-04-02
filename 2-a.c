
// Write a program to print the average of 3 numbers

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a , b , c;
    printf("Welcome to the average calculator\n");
    printf("Enter the three number, seperated by space: ");
    scanf("%d %d %d", &a , &b , &c);
    printf("\nThe average of three numbers is: %d\n", (a+b+c)/3);

    return 0;
}
