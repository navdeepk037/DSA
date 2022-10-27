#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int hcf(int a,int b)
{
    int maxi=max(a,b);
    int mini=min(a,b);
    int res=1;
    for(int i=1;i<=mini;i++)
    {
        if(mini%i==0)
        {
            if(maxi%i==0)
            res=max(res,i);
        }
    }
    return res;

}
int lcm(int a,int b)
{
    return ((a*b)/hcf(a,b));
}
int main()
{
    cout<<"enter the two numbers ";
    int a,b;
    cin>>a>>b;
  
    cout<<"the hcf of two numbers is "<<hcf(a,b)<<endl;
    cout<<"the lcm of two numbers is "<<lcm(a,b)<<endl;

}