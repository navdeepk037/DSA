#include<iostream>
using namespace std;
bool prime(int a)
{
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        return false;

    }
    return true;
}
int main()
{
    int a;
    cout<<"enter the number ";
    cin>>a;
    cout<<prime(a);
}