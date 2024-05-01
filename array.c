#include<stdio.h>
int main()
{
    int a[3];
    a[0]=3;
    a[1]=4;
    a[3]=400;
    int x=a[0]+a[3];
    printf("%d\n",x);
    a[2]=100;
    x=a[0]+a[2];
    printf("%d\n",x);

    return 0;
}
