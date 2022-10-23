#include<iostream>
using namespace std;
int main()
{
    int a[]={2,4,2,1,3,45,65,78};
    int n=sizeof(a)/sizeof(int);
    int curr=1;
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]%2==0 && a[i-1]%2!=0  || a[i-1]%2==0 && a[i]%2!=0)
        {
            curr++;
            res=max(res,curr);
        }
        else
        curr=1;
    }
    cout<<res;
}