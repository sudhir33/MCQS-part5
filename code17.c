#include<stdio.h>
void fun(int a[],int size)//1 2 3 4 5
{
	int i=0;
	for(;i<size;i+=2)//
		a[i]=a[i++];//a[3]=a[3]	 i=i+1	
}
int main()
{
	int a[]={1,2,3,4,5},i;
	fun(a,5);//
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
