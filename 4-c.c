
// Write a program to print prime numbers in a range

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num1 , num2;
    scanf("%d %d", &num1 , &num2);

    int update = 0 ;
    if (num2 <= 2)
    {
        printf("There's no prime numbers in the entered range.\n");
    }
    else
    {
        for (int i = num1; i < num2; i++)
        {
            int cout = ceil (sqrt(i)) ;

                for (int j = 2; j < cout; j++)
                {
                    if (i % j == 0)
                    {
                        update ++ ;
                    }
                    // else
                    // {
                    //     continue;
                    // }
                }

            if ((update == 0 && i != 1) || i == 2 || i == 3)
            {
                printf("%d \n", i);
            }
            // else
            // {
            //     continue;
            // }
            
        }
        
    }

    return 0;
}
