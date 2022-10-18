#include<iostream>
using namespace std;
int sorted(int arr[],int length)
{
    for(int i=0;i<length;i++)
    {
        if(arr[i]>arr[i+1])
        return 0;
    }
    return 1;
}
int main()
{
    int length;
    int size;
    cout<<"enter the length ";
    cin>>length;
    cout<<"enter the size ";
    cin>>size;
    int arr[size];
    cout<<"enter the elemets ";
    for(int i=0;i<length;i++)
    cin>>arr[i];
    cout<<sorted(arr,length);
}