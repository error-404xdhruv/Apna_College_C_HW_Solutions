
// Write a program in C to print the elements of anarray in reverse order

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;

}
