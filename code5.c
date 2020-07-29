#include<stdio.h>
int main() 
{ 
	int a[3] = {20,30,40}; 
	int *b; 
	b=a;//
	printf("%d", b+1); 
	return 0;
}
