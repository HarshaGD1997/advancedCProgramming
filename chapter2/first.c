#include<stdio.h>

#define PI 3.14

typedef int* int_pointer;

void main(){
	int a=12;
	int_pointer b = &a;
	printf("Value of int_pointer is %d\n",*b);
	printf("address of a variable is %p\n",b);
}
