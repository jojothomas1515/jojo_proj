#include <stdio.h>
#include "myusefulfunc.h"

int addi(int n, int m)
{
	return n+m;
}

int main(){
   printName("jojo", "thomas");
   printf("\n%d\n" , addi(22,33));
   printf("\a hello how are you");
   return 0;
}
