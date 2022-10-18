#include<iostream>
using namespace std;
int main()
{
    int length;
    int size;
    cout<<"enter the length ";
    cin>>length;
    cout<<"enter the size ";
    cin>>size;
    int arr[size];
    for(int i=0;i<length;i++)
    cin>>arr[i];
    cout<<"enter the element to be deleted ";
    int n;
    cin>>n;
    int index;
for(int i=0;i<length;i++)
{
    if(arr[i]==n)
    index=i;
}
for(int i=index;i<length;i++)
arr[i]=arr[i+1];
length--;
for(int i=0;i<length;i++)
cout<<arr[i]<<" ";

}