/*
 * Stack.c
 *
 *  Created on: 2015年10月9日
 *      Author: bob.sun
 */

#include "../includes/Stack.h"

int popImpl(Stack* this){
	if (this->top == 0){
		return 0;
	}
	int ret = this->data[this->size - this->top];
	this->top -= 1;
	return ret;
}

void pushImpl(Stack* this, int element){
	this->data[this->size - this->top - 1] = element;
	this->top += 1;
}

Stack* NewStack(int size){
	Stack* ret = (Stack*) malloc(sizeof(Stack));
	ret->pop = popImpl;
	ret->push = pushImpl;
	ret->data = (int*) malloc(sizeof(int) * size);
	ret->size = size;
	ret->top = 0;
	return ret;
}
