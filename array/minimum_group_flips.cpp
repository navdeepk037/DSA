#include<iostream>
using namespace std;
int main()
{
    int a[]={0,0,1,1,0,0,1,1,0};
    int n=sizeof(a)/sizeof(int);
    for(int i=1;i<n;i++)
    { 
        if(a[i]!=a[i-1])
        {
            if(a[i]!=a[0])
            
                cout<<"from "<<i<<" to ";
                else
                cout<<i-1<<endl;
            


        }
        if(a[n-1]!=a[0])
        cout<<n-1<<endl; 
    }
}