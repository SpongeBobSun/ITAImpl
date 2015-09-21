/*
 * heap_sort.c
 *
 *  Created on: 2015年9月14日
 *      Author: bob.sun
 */

#include "../include/heapify.h"

#include <stdio.h>

void HeapSort(int* array, int arrayLen){
	Build(array, arrayLen);
	int heapSize = arrayLen;
	for(int i = heapSize - 1; i >= 1; i--){
		int tmp;
		tmp = array[i];
		array[i] = array[0];
		array[0] = tmp;
		heapSize -= 1;
		printf("Before:");
		for(int j = 0; j < arrayLen; j++){
			printf("%d, ", array[j]);
		}
		printf("\n");
		max_heapify(array, 0, heapSize);
		printf("After:");
		for (int j = 0; j < arrayLen; j++){
			printf("%d, ", array[j]);
		}
		printf("\n");
	}
}
