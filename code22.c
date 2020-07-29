#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,size=5,i=0;
	arr=(int *)calloc(size,sizeof(int));//5
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	//free(arr);
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
