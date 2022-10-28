#include<iostream>
#include<vector>
using namespace std;
int prime(int n)
{
    int count=0;
    vector<bool> isprime(n+1,true);
    for(int i=2;i*i<n;i++)
    {
        if(isprime[i])
        {
            for(int j=2  *i;j<n;j=j+i)
            isprime[j]=false;
        }
    }
    for(int i=2;i<n;i++)
    if(isprime[i])
    count++;
    return count;

}
int main()
{
    int n;
    cout<<"enter the value of the number ";
    cin>>n;
    cout<<prime(n);
}