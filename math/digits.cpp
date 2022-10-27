#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    int count=0;
    do
    {
        count++;
        n=n/10;
        
    }while(n!=0);
    cout<<count;
    
}