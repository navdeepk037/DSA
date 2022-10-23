#include<iostream>
#include<cmath>
using namespace std;
int max(int a[],int n)
{
    int res=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        count=0;
        else
        {
            count++;
            res=max(count,res);
        }


    }
    return res;
}
int main()
{
    int a[]={1,1,1,1,0,0,0,1,1,1};
    int n=sizeof(a)/sizeof(int);
    cout<<"the maximum number of 1 is "<<max(a,n);
}