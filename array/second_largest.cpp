#include<iostream>
using namespace std;
int second_largest(int arr[],int n)
{
    int largest=0;
    int second_largest=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[largest])
        largest=i;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[largest]!=0)
        {
            if(second_largest==-1)
            second_largest=i;
            else if(arr[i]>arr[second_largest])
            second_largest=i;
        }
    }
    return second_largest;
}
int main()
{
    int length,size;
    cout<<"enter the length ";
    cin>>length;
    cout<<"enter the size ";
    cin>>size;
    cout<<"enter the elements ";
    int arr[size];
    for(int i=0;i<length;i++)
    cin>>arr[i];
    cout<<"the second largest element is "<<second_largest(arr,length)<<" index";
}