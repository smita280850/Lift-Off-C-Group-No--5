// wap to count the no of occurence of a number in an array using function
#include<stdio.h>
int main()
{
    int size,i,num,occr=0;
    printf("Enter the array size: ");
    scanf("%d" , &size);

    int arr[size];
    printf("Enter the %d elements of array: ", size);
    for (i=0; i<size; i++)
    {
        scanf("%d" , &arr[i]);
    }
    printf("Enter the array item you want to know =");
    scanf("%d" , &num);
    for(i=0 ; i<size ; i++)
    {
        if (arr[i]== num)
        {
            occr++;
        }
    }
    printf("%d occured %d times\n" , num, occr);
}