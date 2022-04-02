
// take a number (n) from user & output its cube (n*n*n)

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Welcome to the CUBE calculator");
    printf("\nEnter the number n you want cube of: ");
    scanf("%d", &n);
    printf("The cube of %d is: %d\n", n , n*n*n);

    return 0;
}
