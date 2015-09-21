/*
 ============================================================================
 Name        : QuickSort.c
 Author      : bob.sun
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "Array.h"
#include "QuickSort.h"

int array[] = {12, 54, 2, 5, 5, 7, 12, 543, 84, 90, 63, 73, 672, 6927, 1, 343, 64234, 6, 90, 1235, 53, 74};
int main(void) {
	QuickSort(array, 0, ARRAY_LEN(array) - 1);
	for(int i = 0; i < ARRAY_LEN(array) - 1; i++){
		printf("%d, ",array[i]);
	}
}
