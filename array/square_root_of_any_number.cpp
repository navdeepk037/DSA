#include<iostream>
using namespace std;
int sqrt(int x)
{
    int s=1;
    int e=x/2;
    int ans;
    while(s<e)
    {

        int mid=(s+e)/2;
        int sqr=mid*mid;
        if(mid*mid==x)
        return mid;
        else if(sqr>x)
        e=mid-1;
        else
        {
        s=mid+1;
        ans=mid;
        }


return ans;
    }
}
int main()
{
    int n;
    cout<<"enter the number you want to enter ";
    cin>>n;
    if(n==0 || n==1)
    {
        cout<<n;
        return n;
    }
    cout<<sqrt(n);
    return 0;
}