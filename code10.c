#include<stdio.h>
int main()
{
    int a[5] = {5, 1, 15, 20, 25};// 5 3 15 20 25
    int i, j, m;
    i = ++a[1];//i=2
    j = a[1]++;//j=2
    m = a[i++];//m=15;i=3
    printf("%d, %d, %d", i, j, m);//3 2 15
    return 0;
}
