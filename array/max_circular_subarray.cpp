#include<iostream>
using namespace std;
int main()
{
    int a[]={8,-4,3,-5,4};
    int n=sizeof(a)/sizeof(int);
    int res=a[0];
    int max_sum=a[0];
    for(int i=1;i<n;i++)
    {
        max_sum=max(max_sum+a[i],a[i]);
        res=max(res,max_sum);
    }
    
    
}