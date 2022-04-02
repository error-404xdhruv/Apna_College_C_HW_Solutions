
// Write a program to read a string from a file & output to the user

#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fptr = fopen ("test10_a.txt" , "r") ;

    char ch ;
    ch = fgetc (fptr) ;
    while (ch != EOF)
    {
        printf("%c", ch) ;
        ch = fgetc(fptr) ;
    }
    fclose (fptr) ;
    printf("\n") ;
    return 0;
}
