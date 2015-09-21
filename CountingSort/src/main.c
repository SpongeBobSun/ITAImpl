/*
 * main.c
 *
 *  Created on: 2015年9月21日
 *      Author: bob.sun
 *  Notice:
 *  	This algorithm can NOT hold negative values.
 */

#include <stdio.h>
#include "../include/array.h"
#include "../include/CountingSort.h"

//int input[] = {4, 6, 23, 1, 0, 2, 6, 16, 12, 13, 5, 9, 7, 18};

int input[] = {5, 3, 1, 0, 5, 6, 2, 2, 3, 7, 4};

int main(int argc, char** argv){
	int* result = CountingSort(input, NULL , 23, ARRAY_LEN(input));

	for(int i = 0; i < ARRAY_LEN(input); i++){
		printf("%d, ", result[i]);
	}

	return 0;
}
