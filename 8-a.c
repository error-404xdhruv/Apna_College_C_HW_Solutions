
// Write a program to convert all lowercase vowels to uppercase in a string

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    
    char string[100] ;
    printf("Enter the word or sentence: ");
    fgets (string , 100 , stdin) ;
    printf("The original string is: ");
    puts (string) ; // puts automatically comes with a new line character '\n'
    
    int i = 0;
    while (string[i] != '\0')
    {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            string[i] = string[i] - 32 ;
        }
        i++ ;
    }
    
    printf("The modified string is: ");
    puts(string) ;
    
    return 0;
}
