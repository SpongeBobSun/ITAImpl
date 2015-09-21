/*
 * merge_sort.c
 *
 *  Created on: 2015年9月10日
 *      Author: bob.sun
 */

#include "../include/merge_sort.h"
#include <stdlib.h>
void merge(int* array, int start, int middle, int end);

void merge_sort(int* array, int start, int end){
	if (start >= end)
		return;
	int middle = (end + start) / 2;
	merge_sort(array, start, middle);
	merge_sort(array, middle + 1, end);
	merge(array, start, middle, end);
}

void merge(int * array, int start, int middle, int end){
	int* swap = (int* ) malloc((end - start + 1) * sizeof(int));
	int leftIndex, rightIndex, swapIndex = 0;
	leftIndex = start;
	rightIndex = middle + 1;
	while(leftIndex <= middle && rightIndex <= end){
		if (array[leftIndex] <= array[rightIndex]){
			swap[swapIndex++] = array[leftIndex++];
		} else {
			swap[swapIndex++] = array[rightIndex++];
		}
	}
	while (leftIndex <= middle){
		swap[swapIndex++] = array[leftIndex++];
	}
	while (rightIndex <= end){
		swap[swapIndex++] = array[rightIndex++];
	}

	for (int i = 0; i < swapIndex; i++){
		array[start + i] = swap[i];
	}
	free(swap);
}
