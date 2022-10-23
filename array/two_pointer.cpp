#include<iostream>
using namespace std;
void sum(int a[],int n,int target)
{
    int start=0;
    int end=n-1;
    while(start<end)
    {
        int sum=a[start]+a[end];
        if(sum==target)
        cout<<start<<" "<<end;
        else if(sum>target)
        end--;
        else
        start++;
    }
}
int main()
{
    int a[]={-3,2,3,3,6,8,15};
    int target;
    cin>>target;
    int n=sizeof(a)/sizeof(int);
    sum(a,n,target);
}