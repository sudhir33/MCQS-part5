#include<stdio.h>
int main()
{
    int arr[]={2, 3, 4, 1, 6};
    printf("%u, %u, %u\n", arr+1, &arr[0]+1, &arr+1);//add1st add1st
    return 0;
}
