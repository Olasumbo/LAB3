/*
 ============================================================================
 Name        : Lab3-ex3.c
 Author      : Ola
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int factorial ( int num )
{
	if (num != 1) // Introduced an error statement so caught the number 1.
	{
		num = num * factorial( num - 1 );
	}
    return num;
}

int main(void)
{
    int no,ans;

    printf("Enter the number \n");
    scanf( "%d", &no );
    fflush( stdout );

    ans = factorial( no );

    printf("The factorial is %d ", ans );
    fflush( stdout );

    return 0;
}
