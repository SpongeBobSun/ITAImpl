/*
 * max_heap.c
 *
 *  Created on: 2015年9月10日
 *      Author: bob.sun
 */

#include "../include/max_heap.h"
#include "../include/array.h"
#include "../include/heapify.h"

int LeftLeafOf(int i){
	return 2 * i + 1 ;
	}

int RightLeafOf(int i){
	return 2 * (i + 1);
	}
int RootOf(int i){
	return i / 2;
	}
int LengthOf(int* array){
	return ARRAY_LEN(array);
	}
void Exchange(int* array, int l, int r){
	int tmp = array[l];
	array[l] = array[r];
	array[r] = tmp;
	}

void Build(int* array, int arraySize){
	for (int i = arraySize / 2 ; i >= 0; i--){
		max_heapify(array, i, arraySize);
	}
}
