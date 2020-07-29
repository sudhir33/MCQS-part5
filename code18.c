#include<stdio.h>
#include<stdlib.h>
void fun(int a[],int size)
{
	int i=0,*p;
	p=(int *)malloc(size*sizeof(int));//5*4=20
	for(i=0;i<size;i++)	//1 2 3 4 5
	{
		p[i]=a[i];//1 2 3 4 5
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",p[i]);
	}
}
int main()
{
	int a[]={1,2,3,4,5},i;
	fun(a,5);//
	
	return 0;
}
