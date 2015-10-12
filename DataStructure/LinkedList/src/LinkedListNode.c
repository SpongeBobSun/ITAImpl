/*
 * LinkedListNode.c
 *
 *  Created on: 2015年10月12日
 *      Author: bob.sun
 */

#include <stdlib.h>
#include "../includes/LinkedListNode.h"

Node* NewNode(int element){
	Node* ret = (Node*) malloc(sizeof(Node));
	ret->element = element;
	return ret;
}
