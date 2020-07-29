#include<stdio.h>
void fun(int a[],int size)//2 3 4 5 6
{
	int i=0;
	for(;i<size;i++)//0 1 
		a[i]=a[i]+1;//a[1]=a[1]+1	
}
int main()
{
	int a[]={1,2,3,4,5},i;
	fun(a,5);//
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);//1 2 3 4 5
	}
	return 0;
}
