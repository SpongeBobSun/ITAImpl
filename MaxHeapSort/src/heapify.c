/*
 * heapify.c
 *
 *  Created on: 2015年9月10日
 *      Author: bob.sun
 */

#include "../include/heapify.h"
#include "../include/array.h"

#include <stdio.h>

void max_heapify(int* array, int i, int heapLen){
	int l = LeftLeafOf(i);
	int r = RightLeafOf(i);
	int largest;

	if (l <= heapLen - 1 && array[l] > array[i]){
		largest = l;
	} else {
		largest = i;
	}

	if (r <= heapLen - 1 && array[r] > array[largest]){
		largest = r;
	}

	if (largest != i) {
		Exchange(array, largest, i);
		max_heapify(array, largest, heapLen);
	}
}
