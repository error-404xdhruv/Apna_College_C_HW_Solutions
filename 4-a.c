
/* Search on what a "nested loop" is & print this pattern using it.

                    *****
                    *****
                    *****
                    *****
*/

#include <stdio.h>
 int main(int argc, char const *argv[])
 {
     printf("Program to print the * in a 5x4 pattern.\n");

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            printf("*");
        }
        printf("*\n");
    }
    return 0;
 }
 