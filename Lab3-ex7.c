/*
 ============================================================================
 Name        : Lab3-ex7.c
 Author      : Ola
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 1309;
	int *p = NULL;

	printf("\n The value of x is = %d",x);
	printf("\n The pointer points to the value = %d", &p);// change * to & to stop the seg fault
	// The line above produces a seg fault

	return 1;
}
