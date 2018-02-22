/*
 ============================================================================
  Name        : Lab3-ex5.c
 Author      : Ola
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
    char *a = "hey";
    a = "hello";
    printf("%s",a);

   //free( a );// There is an issue with the free

    return 0;
}
