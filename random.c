#include<stdio.h>

void swap(int *a, int* b)
{
  *a = *a ^ *b;
  *b = *a ^ *b;
  *a = *a ^ *b;
}

int main(){
  int a = 10, b = 5;
  printf("Hello World\n");
  printf("a = %d b = %d\n",a,b);
  swap(&a,&b);
  printf("a = %d b = %d\n",a,b);
  return 0;
}
