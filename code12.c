#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4,5,6,2,3,4},i,n=7;
	for(i=n;i>=0;i--)//i=7 6 5 4 3 2 1 0
	{
		if(a[i]%2==0)//2%2==0
		{
			printf("%d ",a[a[i]+1]);//a[3]
		}
	}
}// 4 3 6 4
