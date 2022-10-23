#include<iostream>
#include<cmath>
using namespace std;
int max(int a[],int n)
{
    int lmax[n];
    int rmax[n];
    int ans=0;
    lmax[0]=a[0];
    for(int i=1;i<n;i++)
    lmax[i]=max(lmax[i-1],a[i]);
    rmax[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    rmax[i]=max(rmax[i-1],a[i+1]);
    for(int i=1;i<n-1;i++)
    {
        int var=min(lmax[i],rmax[i]);
        if(var>a[i])
        ans=ans+var-a[i];
    }
    return ans;
}
int main()
{
    int a[]={3,0,2,0,4};
    int n=sizeof(a)/sizeof(int);
    cout<<"the maximum water that can be stored is "<<max(a,n);
}