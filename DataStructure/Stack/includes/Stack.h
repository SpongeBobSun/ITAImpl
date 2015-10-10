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
	int* data;
	int (*pop)();
	void (*push)(int elemeqnt);
} Stack;

int popImpl();
void pushImpl(int);
Stack* NewStack(int size);

#endif /* STACK_H_ */
