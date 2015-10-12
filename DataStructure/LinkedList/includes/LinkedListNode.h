/*
 * LinkedListNode.h
 *
 *  Created on: 2015年10月12日
 *      Author: bob.sun
 */

#ifndef LINKEDLISTNODE_H_
#define LINKEDLISTNODE_H_

#include <stdlib.h>

typedef struct NodeStruct{
	int element;
	struct NodeStruct* prev;
	struct NodeStruct* next;
} Node;

Node* NewNode(int element);

#endif /* LINKEDLISTNODE_H_ */
