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
Node* searchImpl(LinkedList*, Node*);
int deleteImpl(LinkedList*, Node*);
int deleteAtImpl(LinkedList*, int);
Node* getAtImpl(LinkedList*, int);

LinkedList* NewLinkedList(){
	LinkedList* ret = (LinkedList*) malloc(sizeof(LinkedList));
	Node* head = (Node*) malloc(sizeof(Node));
	head->prev = NULL;
	head->next = NULL;
	ret->append = appendImpl;
	ret->insert = insertImpl;
	ret->next = nextImpl;
	ret->prev = prevImpl;

	ret->search = searchImpl;
	ret->delete = deleteImpl;
	ret->deleteAt = deleteAtImpl;
	ret->getAt = getAtImpl;

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
		return this->current;
	}
	return NULL;
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

Node* searchImpl(LinkedList* this, Node* key){
	if (this->size == 0){
		return NULL;
	}
	int count = 0;
	Node* ret = this->head->next;
	while (ret != NULL && ret->equals(ret, key) != 0){
		count++;
		ret = ret->next;
	}
	if (ret != NULL){
		this->currentIndex = count;
		this->current = ret;
	}
	return ret;
}

int deleteImpl(LinkedList* this, Node* junk){
	Node* foo = this->search(this, junk);
	if (foo == NULL){
		return -1;
	}
	foo->prev->next = foo->next;
	if (foo->next != NULL)
		foo->next->prev = foo->prev;
	this->size--;
	free(foo);
	return 0;
}

int deleteAtImpl(LinkedList* this, int position){
	if (position > this->size){
		return -1;
	}
	int index = this->currentIndex;
	if (this->currentIndex < position){
		for (int i = 0; i < position - (index + 1); i++){
			this->next(this);
		}
	} else {
		for (int i = 0; i < (index + 1) - position; i++){
			this->prev(this);
		}
	}
	this->current->prev = this->current->next;
	if (this->current->next != NULL)
		this->current->next->prev = this->current->prev;
	free(this->current);
	this->current = this->current->prev;
	this->currentIndex--;
	this->size --;
	return 0;
}

Node* getAtImpl(LinkedList* this, int position){
	if (position >= this->size){
		return NULL;
	}
	int index = this->currentIndex;
	if (this->currentIndex < position){
		for (int i = 0; i < position - (index + 1); i++){
			this->next(this);
		}
	} else {
		for (int i = 0; i < (index + 1) - position; i++){
			this->prev(this);
		}
	}
	return this->current;
}
