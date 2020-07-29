#include<stdio.h>
void fun(int a[],int size)
{
	printf("%d",*a);//
}
int main()
{
	int a[]={1,2,3,4,5},i;
	fun(a,5);//
	return 0;
}
