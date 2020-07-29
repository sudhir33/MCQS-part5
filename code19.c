#include<stdio.h>
#include<stdlib.h>
int * fun(int a[],int size)
{
	int i=0,*p;
	p=(int *)malloc(size*sizeof(int));
	for(i=0;i<size;i++)	
	{
		p[i]=++a[i];// 1 2 3 4 5
	}
	return p;
}
int main()
{
	int a[]={1,2,3,4,5},i,*p;
	p=fun(a,5);//
	for(i=0;i<5;i++)
	{
		printf("%d ",p[i]);
	}
	
	return 0;
}
