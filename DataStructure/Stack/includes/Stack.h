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
	int free;
	int (*pop)(struct StackStruct*);
	int (*push)(struct StackStruct*,int);
	int (*isFull)(struct StackStruct*);
} Stack;

int popImpl(Stack*);
int pushImpl(Stack*, int);
Stack* NewStack(int size);
int isFullImpl(Stack*);

#endif /* STACK_H_ */
