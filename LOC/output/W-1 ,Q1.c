#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if (i%3==0)
        {
            printf("Fizz\n");
            continue;
        }
        else if(i%5==0)
        {
            printf("Buzz\n");
            continue;
        }
        else 
        {
            printf("%d\n",i);
        }
    }
}