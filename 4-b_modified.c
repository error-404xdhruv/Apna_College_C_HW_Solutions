
// write a program to check whether a given number is prime or not

// basic method

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, update = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            update = 1;
        }
    }
    if ((update == 0 && n != 1) || n == 2 || n == 3)
    {
        printf("Yes its a prime number.\n");
    }
    else
    {
        printf("No its not a prime number, its composite number.\n");
    }
    return 0;
}
