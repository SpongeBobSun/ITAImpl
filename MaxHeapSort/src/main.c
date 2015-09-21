#include <stdio.h>

#include "../include/array.h"
#include "../include/heapify.h"

int array[] = {16, 14, 10, 8, 7, 9, 3, 2, 4, 1};

int main(int argc, char **argv)
{
	HeapSort(array, ARRAY_LEN(array));
	int i;
	for(i = 0; i < ARRAY_LEN(array); i ++){
		printf("%d, ", array[i]);
	}
	return 0;
}
