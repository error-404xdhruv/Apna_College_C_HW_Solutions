
// Write a function to print "Hot" or "Cold" depending on the temperature user enters.

#include <stdio.h>

void temp (int tem);

int main(int argc, char const *argv[])
{
    int tem;
    char deg_symbol = 248;
    printf("Please enter the temp in %cC: ", deg_symbol);
    scanf("%d", &tem);

    temp (tem);
    return 0;
}
void temp (int temp)
{
    if (temp > 0 && temp < 15)
    {
        printf("Cold\n");
    }
    else if (temp >= 15 && temp < 35)
    {
        printf("Room temperature\n");
    }
    else if (temp >= 35)
    {
        printf("Hot\n");
    }
    
}