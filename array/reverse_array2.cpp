#include<iostream>
using namespace std;
void display(int arr[],int length)
{
    for(int i=0;i<length;i++)
    cout<<arr[i]<<" ";

}
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int* reverse_array(int arr[],int length)
{
    int i,j;
    for(i=0,j=length-1;i<j;i++,j--)
    swap(&arr[i],&arr[j]);
    return arr;
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
    for(int i=0;i<length;i++)
    cin>>arr[i];
    reverse_array(arr,length);
    display(arr,length);
}