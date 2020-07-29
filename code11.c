#include<stdio.h>
int main()
{
	int a[10]={20,10,23,21,32,33,89},i,n=7;
	for(i=n;i>=0;i--)//i=0
	{
		if(a[i]%2==0 && i%2==0)//20%2==0 && 0%2==0
		{
			printf("%d ",a[i]);//32 20
		}
	}
}
