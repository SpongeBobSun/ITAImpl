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
	this->free += 1;
	return ret;
}

int pushImpl(Stack* this, int element){
	if (this->free == 0){
		return -1;
	}
	this->data[this->size - this->top - 1] = element;
	this->top += 1;
	this->free -= 1;
	return 0;
}

int isFullImpl(Stack* this){
	return this->free == this->size ? 1 : 0;
}

Stack* NewStack(int size){
	Stack* ret = (Stack*) malloc(sizeof(Stack));
	ret->pop = popImpl;
	ret->push = pushImpl;
	ret->isFull = isFullImpl;
	ret->data = (int*) malloc(sizeof(int) * size);
	ret->size = size;
	ret->free = size;
	ret->top = 0;
	return ret;
}
