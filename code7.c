#include<stdio.h>
int main()
{
    int arr[]={2, 3, 4, 1, 6},i;
    for(i=0;i<5;i++)// 0 1 2 3 4
    {
    	printf("%d ",*(arr+i));//arr[i]
	}
    return 0;
}
