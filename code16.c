#include<stdio.h>
void fun(int a[],int size)//2  2 4  4 0
{
	int i=0;
	for(;i<size;i++)// 4
		a[i]=a[++i];//a[4]=a[5]	
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
