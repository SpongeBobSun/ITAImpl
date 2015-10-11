/*
 * Queue.h
 *
 *  Created on: 2015年10月11日
 *      Author: bob.sun
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include <stdlib.h>

typedef struct QueueStruct{
	int size;
	int tail;
	int head;
	int* data;
	int free;
	int (*dequeue)(struct QueueStruct*);
	int (*enqueue)(struct QueueStruct*,int);
	int (*isEmpty)(struct QueueStruct*);
} Queue;

Queue* NewQueue(int);
int dequeueImpl(Queue*);
int enqueueImpl(Queue*, int);
int isEmptyImpl(Queue*);

#endif /* QUEUE_H_ */
