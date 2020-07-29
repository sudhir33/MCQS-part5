#include<stdio.h>
#include<stdlib.h>
int main() 
{ 
	int *arr,i,size=5;
	arr=(int *)calloc(5,sizeof(int));//int ---4
	for(i=0;i<size;i++)
	{
		scanf("%d",arr+i);//&arr[i],arr+i
	}
	free(arr);
	for(i=0;i<size;i++)//0 1 2 3 4
	{
		printf("%d ",*(i+arr));//arr[i]; *(arr+i);i[arr]
	}
	return 0;
}
