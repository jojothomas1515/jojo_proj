#include <stdio.h>
#include "myusefulfunc.h"

int main(){
   printName("jojo", "thomas");
  
  for (int i =0; i<30000; i++){
    if((i%10000) == 0){
      printf("%d \n", (i/10000));
    }}
  int count;
  printf("Enter a number \n");
  scanf("%d", &count);
  for(int i=0; i<count; i++){
    printf("%d ", i);
    if ((i%50) == 0){
      printf("\n newline \n");
    }
  }
  return 0;
}
