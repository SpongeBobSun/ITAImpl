/*
 ============================================================================
 Name        : Queue.c
 Author      : bob.sun
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "../includes/Queue.h"

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	Queue* q = NewQueue(5);
	q->enqueue(q, 2);
	q->enqueue(q, 3);
	q->enqueue(q, 4);
	q->enqueue(q, 5);
	q->enqueue(q, 6);
	q->dequeue(q);
	q->dequeue(q);
	q->enqueue(q, 7);
	q->enqueue(q, 8);
	q->dequeue(q);
	q->enqueue(q, 9);
	for (int i = 0; i < q->size; i++){
		printf("%d,", q->dequeue(q));
	}
	printf("\nQueue Free: %d", q->free);
	return EXIT_SUCCESS;
}
