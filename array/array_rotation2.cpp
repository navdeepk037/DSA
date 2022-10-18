#include<iostream>
using namespace std;
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int *reverse(int a[],int low,int high)
{
    while(low<high)
    {
        swap(a[low],a[high]);
        low++;
        high++;
    }
    return a;
}
int main()
{
    int a[]={1,2,3,4,5,6,7};
    int n=sizeof(a)/sizeof(int);
    int d;
    cout<<"enter the value of d ";
    cin>>d;
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
    display(a,n);
}