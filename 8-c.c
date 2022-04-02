
// Write a program to remove blank spaces in a string

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char string[100] ;
    printf("Enter the string: ");
    fgets(string , 100 , stdin) ;

    printf("the original string is: ");
    puts(string) ;

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ')
        {
            string[i] = "" ;
        }
        else
        {
            continue;
        }
        
    }
    printf("the modified string is: ");
    puts(string) ;
    return 0;
}
