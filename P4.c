//wap to print pattern using loop
#include<stdio.h>
int main()
{
    int n=5,r,c,a=1;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        printf("%5d",a++);
        printf("\n");
    }
    return 0;
}