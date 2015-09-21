#include <stdio.h>

#include "../include/array.h"
#include "../include/merge_sort.h"

int input[] = {7,234,5,2,12,65,1,2,2,62,13,87};

int main(){
  merge_sort(input, 0, ARRAY_LEN(input) - 1);
  for(int i = 0; i < ARRAY_LEN(input); i++){
    printf("%d, ", input[i]);
  }
}
