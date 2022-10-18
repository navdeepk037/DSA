#include<iostream>
using namespace std;
int max(int arr[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
int main()
{
    int arr[]={12,34,32,21,45,6,5,4};
    int n=sizeof(arr)/sizeof(int);
    cout<<"the max element is at "<<max(arr,n);
}