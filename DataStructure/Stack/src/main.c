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
	Stack* stack = NewStack(6);
	stack->push(stack, 1);
	stack->push(stack, 2);
	stack->push(stack, 3);
	stack->push(stack, 4);
	stack->push(stack, 5);
	stack->push(stack, 6);
	stack->pop(stack);
	stack->pop(stack);
	stack->pop(stack);
	stack->push(stack, 7);
	stack->push(stack, 8);
	stack->push(stack, 9);
	for (int i = 0; i < stack->size; i ++){
		printf("%d,", stack->pop(stack));
	}
	printf("\n Stack length:%d", stack->top);
	return EXIT_SUCCESS;
}
