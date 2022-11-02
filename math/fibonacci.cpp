#include<iostream> 
using namespace std;
int main()
{
    int sum;
    int a,b,n;
    a=0;
    b=1;
    cout<<"enter the number of terms ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<<a<<" ";
            continue;
        }
        if(i==2)
        {
            cout<<b<<" ";
            continue;
        }
        else{
        sum=a+b;
        a=b;
        b=sum;
        cout<<sum<<" ";
        }
    }
}