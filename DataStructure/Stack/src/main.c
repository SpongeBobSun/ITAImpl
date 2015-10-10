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
	stack->push(stack, 1);
	stack->push(stack, 2);
	stack->push(stack, 3);
	stack->push(stack, 4);
	for (int i = 0; i < stack->size; i ++){
		printf("%d,", stack->pop(stack));
	}
	printf("\n Stack length:%d", stack->top);
	return EXIT_SUCCESS;
}
