#include<stdio.h>
int main()
{
    int arr[]={2, 3, 4, 1, 6},i;
    for(i=0;i<5;i++)
    {
    	printf("%d ",*(arr+i));
	}
    return 0;
}
