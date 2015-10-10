/*
 ============================================================================
 Name        : Stack.c
 Author      : bob.sun
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "../includes/Stack.h"

int main(void) {
//	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	Stack* stack = NewStack(10);
	stack->pop();
	stack->push(1);
	return EXIT_SUCCESS;
}
