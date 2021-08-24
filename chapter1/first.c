#include<stdio.h>

int i=4;

void change(void);

void main(){
	printf("i value is %d\n",i);
	change();
	printf("i value after change method is %d",i);
	
}
