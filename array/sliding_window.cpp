#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    int a[]={10,8,30,-5,20,7};
    int n=sizeof(a)/sizeof(int);
    int k=3;
    int max_sum=INT_MIN;
    int curr_sum=0;
    for(int i=0;i<k;i++)
    curr_sum=curr_sum+a[i];
    max_sum=max(max_sum,curr_sum);
    for(int i=k;i<n;i++)
    {
    curr_sum=curr_sum+a[i]-a[i-k];
    max_sum=max(max_sum,curr_sum);
    }
    cout<<max_sum;

}