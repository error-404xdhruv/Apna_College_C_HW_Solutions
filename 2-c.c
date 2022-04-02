
// Write a program to print the smallest number of two

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a , b;

    printf("Enter the two number a and b seperated with space: ");
    scanf("%d %d", &a, &b);
    
    if (a > b)
    {
        printf("a = %d is greater than b = %d\n", a, b);
    }
    else if (b > a)
    {
        printf("b = %d is greater than a = %d\n", b, a);
    }
    else if (a == b)    
    {
        printf("a = %d and b = %d are both equal.\n", a , b);
    }
    
    
    return 0;
}
