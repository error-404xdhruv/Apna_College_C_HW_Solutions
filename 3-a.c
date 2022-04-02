
// program to check if a given number is Armstrong number or not

/*
153 is an Armstrong number
153 = 1*1*1 + 5*5*5 + 3*3*3
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num,  originalnum , remainder , result = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    originalnum = num;

    while (originalnum != 0)
    {
        // first consider the last digit
        remainder = originalnum % 10;

        result += remainder * remainder * remainder ;

        // removing the last digit from original number
        originalnum /= 10;

    }

    if (result == num)
    {
        printf("Yes it is an Armstrong Number.\n");
    }
    else
    {
        printf("No its not an Armstrong Number.\n");
    }
    

    return 0;
}
