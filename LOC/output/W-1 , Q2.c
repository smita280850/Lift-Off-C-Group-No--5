#include<stdio.h>
int  main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a==0)
    {
        printf("The Number is zero");
    }
    else if(a>0)
    {
        printf("The Number %d is Positive" , a);
    }
    else
    {
        printf("The Number %d is Negative" , a);
    }

}