//wap to copy the elementsof one array into another array
#include<stdio.h>
int main()
{
    int a[5]= {3,4,5,6,7},n=5,b[n],i;
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("The first array is:");
    for(i=0;i<n;i++)
    {
        printf("%d" , a[i]);
    }
    printf("The second array is:");
    for(i=0;i<n;i++)
    {
        printf("%d" , b[i]);
    }
    return 0;
}       
        