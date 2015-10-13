/*
 * LinkedListNode.c
 *
 *  Created on: 2015年10月12日
 *      Author: bob.sun
 */

#include <stdlib.h>
#include "../includes/LinkedListNode.h"

int equalsImpl(Node*, Node*);

Node* NewNode(int element){
	Node* ret = (Node*) malloc(sizeof(Node));
	ret->element = element;
	ret->equals = equalsImpl;
	return ret;
}

int equalsImpl(Node* foo, Node* bar){
	return foo->element - bar->element;
}
