/*
 * Queue.c
 *
 *  Created on: 2015年10月11日
 *      Author: bob.sun
 */

#include "../includes/Queue.h"

int dequeueImpl(Queue* this){
	if (this->tail == 0){
		return 0;
	}
	this->free += 1;
	return this->data[++this->head];
}
int enqueueImpl(Queue* this, int element){
	if (this->free == 0){
		return -1;
	}
	this->free -= 1;
	this->data[++this->tail] = element;
	return 1;
}

int isEmptyImpl(Queue* this){
	return this->tail;
}

Queue* NewQueue(int size){
	Queue* ret = (Queue*) malloc(sizeof(Queue));
	ret->enqueue = enqueueImpl;
	ret->dequeue = dequeueImpl;
	ret->isEmpty = isEmptyImpl;
	ret->data = (int*) malloc(sizeof(int) * size);
	ret->size = size;
	ret->free = size;
	ret->tail = 0;
	ret->head = 0;
	return ret;
}
