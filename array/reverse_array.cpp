#include<iostream>
using namespace std;
int *reverse_array(int arr[],int length)
{
    int arr2[length];
    for(int i=0,j=length-1;i<length;i++,j--)
    arr2[j]=arr[i];
    for(int i=0;i<length;i++)
    arr[i]=arr2[i];
    return arr;
}
void display(int arr[],int length)
{
    for(int i=0;i<length;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int length,size;
    cout<<"enter the length of array ";
    cin>>length;
    cout<<"enter the size of array ";
    cin>>size;
    int arr[size];
    for(int i=0;i<length;i++)
    cin>>arr[i];
    reverse_array(arr,length);
    display(arr,length);
}