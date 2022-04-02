
// In an array of numbers, find how many times does a number 'x' occurs

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the character you want to trace: ");
    int num;
    scanf("%d", &num);
    int update = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == num)
        {
            update++;
        }
        else
        {
            continue;
        }
    }
    printf("%d occurs %d times in the entered array.\n", num , update);
    return 0;
}
