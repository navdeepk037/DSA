#include<iostream>
using namespace std;
void leader(int a[],int n)
{
    int curr_leader=a[n-1];
    cout<<curr_leader<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]>curr_leader)
        {
        curr_leader=a[i];
        cout<<curr_leader;
        }
    }
}
int main()
{
    int a[]={1,2,34,45,32,46,67,8};
    int n=sizeof(a)/sizeof(int);
    leader(a,n);
}