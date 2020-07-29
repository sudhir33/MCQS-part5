#include<stdio.h>
int main()
{
    int arr[]={2, 10, 9, 8, 100},i;
    for(i=0;i<5;i++)
    {
    	printf("%d ",*arr+i);//2+0,2+1,2+2,2+3,2+4
	}
    return 0;
}
