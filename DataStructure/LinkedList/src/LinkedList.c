/*
 * LinkedList.c
 *
 *  Created on: 2015年10月11日
 *      Author: bob.sun
 */


#include "../includes/LinkedList.h"

Node* prevImpl(LinkedList*);
Node* nextImpl(LinkedList*);
LinkedList* insertImpl(LinkedList*, Node*, int);
LinkedList* appendImpl(LinkedList*, Node*);

LinkedList* NewLinkedList(){
	LinkedList* ret = (LinkedList*) malloc(sizeof(LinkedList));
	Node* head = (Node*) malloc(sizeof(Node));
	head->prev = NULL;
	head->next = NULL;
	ret->append = appendImpl;
	ret->insert = insertImpl;
	ret->next = nextImpl;
	ret->prev = prevImpl;
	ret->size = 0;
	ret->head = head;
	ret->current = head;
	ret->currentIndex = -1;
	return ret;
}

Node* prevImpl(LinkedList* this){
	if (this->currentIndex == -1){
		return this->current;
	}
	this->current = this->current->prev;
	this->currentIndex --;
	return this->current;
}

Node* nextImpl(LinkedList* this){
	if (this->current->next != NULL){
		this->current = this->current->next;
		this->currentIndex ++;
	}
	return this->current;
}

LinkedList* insertImpl(LinkedList* this, Node* element, int position){
	Node* tmp;
	int index = this->currentIndex;
	if (this->currentIndex < position){
		for (int i = 0; i < position - (index + 1); i++){
			this->next(this);
		}
		tmp = this->current->next;
		this->current->next = element;
		element->prev = this->current;
		element->next = tmp;
		if (tmp != NULL)
			tmp->prev = element;
		this->size ++;
	} else {
		for (int i = 0; i < (index + 1) - position; i++){
			this->prev(this);
		}
		tmp = this->current->next;
		this->current->next = element;
		element->prev = this->current;
		element->next = tmp;
		tmp->prev = element;
		this->size ++;
	}
	this->next(this);
	return this;
}

LinkedList* appendImpl(LinkedList* this, Node* element){
	Node* ret;
	ret = this->current;
	while(ret->next != NULL){
		ret = ret->next;
	}
	ret->next = element;
	element->prev = ret;
	element->next = NULL;
	this->size ++;
	return this;
}
