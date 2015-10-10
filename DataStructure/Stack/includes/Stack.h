/*
 * Stack.h
 *
 *  Created on: 2015年10月9日
 *      Author: bob.sun
 */

#ifndef STACK_H_
#define STACK_H_

#include <stdlib.h>

typedef struct StackStruct{
	int size;
	int top;
	int* data;
	int (*pop)(struct StackStruct*);
	void (*push)(struct StackStruct*,int);
} Stack;

int popImpl(Stack*);
void pushImpl(Stack*, int);
Stack* NewStack(int size);

#endif /* STACK_H_ */
