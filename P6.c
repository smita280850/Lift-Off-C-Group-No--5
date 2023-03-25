//wap to find maximum occuring integer in an array
#include <iostream>
using namespace std;
int maxFreq(int*arr,int n)
{
    int res=0;
    int count=1;
    for(int i=1;i<n;i++)
    { 
        if(arr[i]==arr[res])
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count==0)
        {
            res=i;
            count=1;
        }
    }
    return arr[res];
}
int main()
{
    int arr[]={40,50,30,40,50,30,30};
    int n=sizeof(arr) / sizeof(arr[0]);
    int freq=maxFreq(arr,n);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==freq)
        {
            count++;
        }
    }
    count<<"Elements"<< maxFreq(arr,n)<<"occurs"<<count<<"times"<<end1;;
    return 0;
}