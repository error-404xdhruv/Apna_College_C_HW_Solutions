
// Write a program to calculate perimeter of rectangle. Take sides, a & b, from the user.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Welcome to the perimeter calculator of a rectangle.\n");
    printf("Enter the dimensions of side a and b:", a, b);
    scanf("%d %d", &a, &b);
    printf("\nThe value of perimeter is: %d", 2*(a+b));
    
    return 0;
}
