
// Write a program in C to print all the letters in englishalphabet using a pointer


// method 1 : most simple method

/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    for (char i = 'A'; i <= 'Z'; i++)
    {
        printf("%c\n", i);
    }
    
    return 0;
}
*/


// using pointers

#include<stdio.h>
#include<stdlib.h>

int main()
{

	char* c; 	// declare a character pointer
	c = (char*)malloc(sizeof(char));	// assigning memory to c

	*c = 'A';	// storing 'A' at the memeory that pointer c is pointing to

	// checking if the ASCII value of alphabet pointed by c
	// is less than equal to ASCII value of alphabet 'Z'
	while (*c <= 'Z') {

		printf("%c\n", *c);
		*c = *c + 1;	// increment the ASCII value of character that pointer c is pointing to

	}

}
