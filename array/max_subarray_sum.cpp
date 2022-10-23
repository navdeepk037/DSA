#include<iostream>
using namespace std;
int main()
{
    int a[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(a)/sizeof(int);
    int res=a[0];
    int max_sum=a[0];
    for(int i=1;i<n;i++)
    {
        max_sum=max(max_sum+a[i],a[i]);
        res=max(res,max_sum);
    }
    cout<<res<<endl;
}