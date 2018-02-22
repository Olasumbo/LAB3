/*
 ============================================================================
 Name        : Lab3-ex8.c
 Author      : Ola
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include<stdio.h>
#include<string.h>
#include<malloc.h>



int main(void)
{
	char *s, *dyn_s;
	int ln;

	printf("Enter the input string\n");
	scanf("%s", s);
	ln = strlen(s);

	dyn_s = malloc(sizeof(char*)*(strlen(s)+1)); //took away the dereferencing
	dyn_s = s;

	dyn_s[strlen(s)]='\0';
	printf("%s", dyn_s); // it needed a %s
	return 0;
}
