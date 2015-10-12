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
	return EXIT_SUCCESS;
}
