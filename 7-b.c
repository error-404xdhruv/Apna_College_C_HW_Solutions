
// Write a program to print the largest number in anarray
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("enter the array size: ");
    scanf("%d", &n);
    int array[n];
    printf("enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int update;
    for (int i = 0; i < n; i++)
    {
        if ( i == 0)
        {
            update = array[0];
        }
        else if (array[i] > array[i-1])
        {
            update = array [i];
        }
        else
        {
            continue;
        }
        
    }
    printf("the largest number in the array is: %d\n", update);

    return 0;
}
