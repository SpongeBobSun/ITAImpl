/*
 * LinkedList.h
 *
 *  Created on: 2015年10月11日
 *      Author: bob.sun
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <stdlib.h>
#include "LinkedListNode.h"

typedef struct LinkedListStruct{
	Node* head;
	Node* current;
	Node* (*prev)(struct LinkedListStruct*);
	Node* (*next)(struct LinkedListStruct*);
	struct LinkedListStruct* (*insert)(struct LinkedListStruct*, Node*, int);
	struct LinkedListStruct* (*append)(struct LinkedListStruct*, Node*);
	int size;
	int currentIndex;
} LinkedList;

LinkedList* NewLinkedList();

#endif /* LINKEDLIST_H_ */
