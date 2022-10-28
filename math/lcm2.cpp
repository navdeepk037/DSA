#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    
    while(a!=b)
    {
        if(b==0)
        return a;
        else
        return gcd(b,a%b);
    }
}
int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int a,b;
    cout<<"enter the value of a and b ";
    cin>>a>>b;
    cout<<"the lcm of a and b is "<<lcm(a,b);
}