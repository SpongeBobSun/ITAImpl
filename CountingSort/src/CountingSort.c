/*
 * CountingSort.c
 *
 *  Created on: 2015年9月21日
 *      Author: bob.sun
 */

#include "../include/CountingSort.h"
#include <sys/_types/_null.h>
#include <memory.h>
#include <stdio.h>

int* CountingSort(int* array, int* result, int maxValue, int arrayLen){
	int* ret;
	maxValue += 1;
	if (result == NULL){
		ret = (int*) malloc(arrayLen * sizeof(int));
	} else {
		ret = result;
	}
	int* valueCountMap = (int*)malloc(maxValue * sizeof(int));
	memset(valueCountMap, 0, maxValue * sizeof(int));
	//FUCKME.
	//To ZERO value, it should always be zero.
	valueCountMap[0] = -1;

	for(int i = 0; i < arrayLen; i++){
		valueCountMap[array[i]] += 1;
	}

	printArray(valueCountMap, maxValue);

	for(int i = 1; i < maxValue; i++){
		valueCountMap[i] += valueCountMap[i - 1];
	}

	printArray(valueCountMap, maxValue);

	for(int i = arrayLen - 1; i >= 0; i--){
		ret[valueCountMap[array[i]]] = array[i];
		valueCountMap[array[i]] -= 1;
	}

	return ret;
}

void printArray(int* array, int len){
	for(int i = 0; i < len; i++){
		printf("[%d]: %d, ",i, array[i]);
	}
	printf("\n");
}
