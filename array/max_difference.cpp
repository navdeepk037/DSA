#include<iostream>
using namespace std;
int max(int a[],int n)
{
    int max_diff=a[1]-a[0];
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]-min>max_diff)
        {
        max_diff=a[i]-min;
        }
        if(a[i]<min)
        min=a[i];

    }
    return max_diff;
}
int main()
{
    int a[]={7,9,5,6,3,2};
    int n=sizeof(a)/sizeof(int);
    cout<<"the max difference is "<<max(a,n);
}