/*
 * QuickSort.c
 *
 *  Created on: 2015年9月17日
 *      Author: bob.sun
 */

#include "QuickSort.h"

void QuickSort(int* array, int start, int end){
	//!!!DO NOT FORGET THE TERMINATION CONDITION!!!
	if (start >= end)
		return;
	int divide = Partition(array, start, end);
	QuickSort(array, start, divide - 1);
	QuickSort(array, divide + 1, end);
}

/**
 * Re-arrange sub-array A[start, end].
 * Return middle index of the re-arranged array.
 * Re-arrange Rule:
 * 		Each element in A[start, ret - 1] is not larger than A[ret];
 * 		Each element in A[ret + 1, end] is not smaller than A[ret];
 *
 * Re-arrange trick:
 * 		Find a "standard value" first (randomly),
 * 		Then compare each value in the array to it.
 */
int Partition(int* array, int start, int end){
	int ender = start;
	int divider = start;
	int flag = array[end];
	for (; ender < end; ender ++){
		if (array[ender] <= flag){
			Swap(array, ender, divider);
			divider ++;
		}
	}
	Swap(array, divider, end);
	return divider;
}

void Swap(int* array, int first, int second){
	int tmp = array[first];
	array[first] = array[second];
	array[second] = tmp;
}
