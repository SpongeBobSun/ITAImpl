#include <stdio.h>
#include <string.h>

int input[] = {5,1,6,12,3,7,8,6};

void main(){
  int len = 8;
  for(int i = 1; i < len; i++){
    for (int j = 0; j < i; j++){
      if (input[j] >=  input[i]){
        int tmp = input[j];
        input[j] = input[i];
        input[i] = tmp;
      }
    }
  }

  for(int i = 0; i < len; i++){
    printf("%d ",input[i]);
  }
}
