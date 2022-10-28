#include<iostream>
using namespace std;
int lcm(int a,int b)
{
    int res=max(a,b);
    while(true)
    {
        if(res%a==0 && res%b==0)
        return res;
        else
        res++;
    }
    return res;
}
int main()
{
    cout<<"enter two numbers ";
    int a,b;
    cin>>a>>b;
    cout<<"the lcm of two numbers is "<<lcm(a,b);
}