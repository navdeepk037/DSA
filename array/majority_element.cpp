#include<iostream>
using namespace std;
int ans(int a[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i==a[j]])
            count=count+1;
        }
        if(count>n/2)
        return i;
        
    }
    return -1;
}
int main()
{
    int a[]={8,7,6,8,6,6,6,6};
    int n=sizeof(a)/sizeof(int);
    cout<<ans(a,n);
}