
// write a function to find sum of digits of a number

#include <stdio.h>

void doWork (int num);

int main(int argc, char const *argv[])
{
    int num, n;

    printf("Enter the number (9 < number < 1000): ");
    scanf("%d", &num);
    
    doWork (num);

    return 0;
}

void doWork (int num)
{
    if (num > 9 && num < 100)
    {
        printf("Sum of digits is: %d\n", (num/10 + num%10));
    }
    else if (num >= 100 && num < 1000)
    {
        printf("Sum of digits is: %d\n", (num/100) +(num%100)/10 + (num%100)%10);
    }
    else
    {
        printf("Please try again !");
    }
    
}