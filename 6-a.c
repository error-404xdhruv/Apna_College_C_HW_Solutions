
// Write a program in C to find the maximum number between two numbers using a pointer

#include <stdio.h>

int max_of_numbers (int *x , int *y);

int main(int argc, char const *argv[])
{
    int num1 , num2;
    printf("Enter the two numbers: ");
    scanf("%d %d", &num1 , &num2);

    printf("the largest of two numbers entered is: %d\n", max_of_numbers (&num1 , &num2));
    return 0;
}
int max_of_numbers (int *x , int *y)
{
    int t , u;
    t = *x;
    u = *y;
    if (t > u)
    {
        return t ;
    }
    else if (t < u)
    {
        return u;
    }
}