#include<iostream>
using namespace std;

void reverse(int a[],int low,int high)
{
    while(low<high)
    {
        int temp=a[low];
        a[low]=a[high];
        a[high]=temp;
        low++;
        high--;
    }
}
void rotate(int a[],int n,int d)
{
    if(d==0)
    return;
    d=d%n;
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
}

void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int main()
{
    int a[]={1,2,3,4,5,6,7};
    int n=sizeof(a)/sizeof(int);
   // int d;
    // cout<<"enter the value of d ";
    // cin>>d;
    rotate(a,n,2);
    display(a,n);
}