#include<iostream>
using namespace std;
int main()
{
    int a[]={6,8,4,8,8};
    int n=sizeof(a)/sizeof(int);
    int res=0;
    int count=1;
    for(int i=1;i<n;i++)
    {
        if(a[res]==a[i])
        count++;
        else
        count--;
        if(count==0)
        {
            count=1;
            res=i;
        }
    }
    count=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[res]==a[i])
        count++;
    }
    if(count>n/2)
    cout<<res;
    else
    cout<<"no majority element is present ";

}