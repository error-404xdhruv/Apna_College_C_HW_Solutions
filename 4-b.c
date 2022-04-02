
// Write a program to check if a number is prime or not

// second method

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n , i;
    int oper;
    printf("Enter the number : ");
    scanf("%d", &n);

    // write your code here

    int value1 = ceil(sqrt(n)); // ceil is used to round-off a number
    int update = 0;
    for (int i = 2; i <= value1; i++)
    {
        if (n % i == 0)
        {
            update  = 1;
        }
    }
        if ((update == 0 && n!= 1) || n == 2 || n == 3) // we have added special condition for n = 2 and n = 3 because their sqrt would be less than 2.
        {
            printf("%d is a prime number.\n", n);
        }
        else
        {
            printf("%d is not a prime number.\n", n);
        }   

    return 0;
}
