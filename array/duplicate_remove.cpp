#include<iostream>
using namespace std;
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int duplicate(int a[],int n)
{
    int res=0;
    a[res]=a[0];
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]!=a[i])
        a[res++]=a[i+1];
        
    }
    return res;
}
int main()
{
    int a[]={1,2,3,3,3,4,4,5,5};
    int n=sizeof(a)/sizeof(int);
    int ans=duplicate(a,n);
    display(a,ans);
}