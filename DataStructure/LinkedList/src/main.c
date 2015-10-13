/*
 ============================================================================
 Name        : LinkedList.c
 Author      : bob.sun
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "../includes/LinkedList.h"

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	//Basic Feature Testing
	LinkedList* list = NewLinkedList();
	list->append(list,NewNode(1));
	list->append(list,NewNode(3));
	list->append(list,NewNode(4));
	list->append(list,NewNode(5));
	printf("Current Index: %d\n", list->currentIndex);
	list->insert(list,NewNode(2), 3);
	list->insert(list,NewNode(6), 5);
	list->next(list);
	list->next(list);
	list->next(list);
	printf("Current Element: %d\n", list->current->element);
	printf("Current Index: %d\n", list->currentIndex);
	Node* head = list->head;
	while(head->next != NULL){
		head = head->next;
		printf("%d, ", head->element);
	}
	list->insert(list, NewNode(-1), 0);
	list->insert(list, NewNode(7), 7);
	printf("\n");
	head = list->head;
	while(head->next != NULL){
		head = head->next;
		printf("%d, ", head->element);
	}
	printf("\n");
	//Advanced Feature Testing
	//Search
	Node* result;
	result = list->search(list, NewNode(4));
	printf("Search Result:%d, At: %d \n", result == NULL ? -2 : result->element, list->currentIndex);
	result = list->search(list, NewNode(-1));
	printf("Search Result:%d, At: %d \n", result == NULL ? -2 : result->element, list->currentIndex);
	result = list->search(list, NewNode(7));
	printf("Search Result:%d, At: %d \n", result == NULL ? -2 : result->element, list->currentIndex);
	result = list->search(list, NewNode(404));
	printf("Search Result:%d, At: %d \n", result == NULL ? -2 : result->element, list->currentIndex);
	//GetAt
	result = list->getAt(list, 5);
	printf("GetResult: %d, At: %d \n", result->element, list->currentIndex);
	result = list->getAt(list, 0);
	printf("GetResult: %d, At: %d \n", result->element, list->currentIndex);
	result = list->getAt(list, list->size - 1);
	printf("GetResult: %d, At: %d \n", result->element, list->currentIndex);
	result = list->getAt(list, list->size);
	printf("GetResult: %d, At: %d \n", result->element, list->currentIndex);
	return EXIT_SUCCESS;
}
