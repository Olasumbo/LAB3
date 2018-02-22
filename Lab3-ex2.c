/*
 ============================================================================
 Name        : Lab3-ex2.c
 Author      : Ola
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() // Had to change my type from void to int
{
    char p[] = "Mizzou"; // P need to be an array instead of a pointer
    p[ 3 ] = 'P';
    printf("%s",p);
    fflush( stdout ); // To flush out the variables that are in the system
    return 0;
}
