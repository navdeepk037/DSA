#include<iostream>
using namespace std;
int main()
{
    int a[]={15,2,4,8,9,5,10,23};
    int n=sizeof(a)/sizeof(int);
    int k;
    cout<<"enter the value of k ";
    cin>>k;
    int start=0;
    int sum=a[0];
    for(int i=1;i<=n;i++)
    {
        while(sum>k && start<i-1)
    {
        sum=sum-a[start];
        start++;
    }
    if(sum==k)
    {
        cout<<"the given sum is found between "<<start<<" and "<<i-1;
        return 0;
    }
    if(i<n-1)
    sum=sum+a[i];
    }
    cout<<"sum not found "<<endl;
}