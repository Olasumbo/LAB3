/*
 ============================================================================
 Name        : Lab3-ex4.c
 Author      : Ola
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int i=0;
    char arr1[ 15 ] = "Trumantiger"; // made the array the same size as arr2
    char arr2[ 15 ]; // arr1 was only assigned 15 space

    while(i<15)
    {
        arr2[ i ] = 'A';
        ++i;
    }

    strcpy( arr1 , arr2 ); // Copying arr2 to arr1 will be impossible if the space allocated
    printf("%s",arr1);		// for aar1 is smaller than arr2

    return 0;
}
