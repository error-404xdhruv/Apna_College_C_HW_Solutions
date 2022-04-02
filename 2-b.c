
// a program to check if given character is a digit or not

#include <stdio.h>
int main(int argc, char const *argv[])
{
    char character; // bhagwan k lie yha char likhe na ki int
    printf("Enter the character: ");
    scanf("%c", &character);

    if (character >= '0' && character <= '9')
    {
        printf("Yep its a digit.\n");
    }
    else
    {
        printf("Nope, its not a digit !\n");
    }

    return 0;
}
