#include<iostream>
using namespace std;
int max(int a[],int n)
{
    int profit=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        profit=profit+a[i]-a[i-1];

    }
    return profit;
}
int main()
{
    int a[]={1,5,3,8,12};
    int n=sizeof(a)/sizeof(int);
    cout<<"maximum profit is "<<max(a,n);
}