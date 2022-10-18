#include<iostream>
using namespace std;
int main()
{
    int size;
    int length;
    cout<<"enter the size ";
    cin>>size;
    cout<<"enter the length ";
    cin>>length;
    int arr[size];
    cout<<"enter the elements ";
    for(int i=0;i<length;i++)
    cin>>arr[i];
    for(int i=0;i<length;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"enter the position ";
    int position;
    cin >>position;
    cout<<"enter the element ";
    int element;
    cin>>element;
    int index=position-1;
    for(int i=length-1;i>=index;i--)
    arr[i+1]=arr[i];
    arr[index]=element;
    length++;
    for(int i=0;i<length;i++)
    cout<<arr[i]<<" ";


    
}