#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
 
 int num0,num1,numtotol;
 
 for(num0=1;num0<=9;num0++){ //num0�p��9�N�[ �j�� 
  for(num1=1;num1<=9;num1++){//num1�p��9�N�[ �j�� 
   printf("%d*%d=%d ",num0,num1,num0*num1);
  }
  printf("\n");
 }
 
 system("PAUSE");
 return 0;
}
