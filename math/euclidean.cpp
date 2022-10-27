#include<iostream>
using namespace std;
int hcf(int a,int b)
{
    while(a!=b)
    {
        if(b==0)
        return a;
        else
       return hcf(b,a%b);
    }

}
int main()
{
    cout<<"enter the two numbers ";
    int a,b;
    cin>>a>>b;
    cout<<"the hcf of two numbers a and b is "<<hcf(a,b);
}