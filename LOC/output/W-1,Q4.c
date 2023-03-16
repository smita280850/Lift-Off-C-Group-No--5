#include<stdio.h>
int main()
{
    int a,b,n;
    printf("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter the values of a and b:\n");
    scanf("%d %d", &a,&b);
    printf("Enter your choice:\n");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
        printf("Sum of %d and %d is:%d",a,b,a+b);
        break;
        case 2:
        printf("Difference of %d and %d is:%d",a,b,a-b);
        break;
        case 3:
        printf("Multiplication of %d and %d is:%d",a,b,a*b);
        break;
        case 4:
        printf("Division of %d and %d is:%d", a,b, a/b);
        break;

    }
return 0;

}