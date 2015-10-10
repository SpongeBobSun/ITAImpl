/*
 * Stack.c
 *
 *  Created on: 2015年10月9日
 *      Author: bob.sun
 */

#include "../includes/Stack.h"

int popImpl(){
	return -1;
}

void pushImpl(){

}

Stack* NewStack(int size){
	Stack* ret = (Stack*) malloc(sizeof(Stack));
	ret->pop = popImpl;
	ret->push = pushImpl;
	ret->data = (int*) malloc(sizeof(int) * size);
	return ret;
}
