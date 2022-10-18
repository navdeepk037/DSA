#include<iostream>
using namespace std;
void frequency(int a[],int n)
{
    int frequency=1;
    int i=1;
    while(i<n)
    {
        while(i<n && a[i]==a[i-1])
        {
            i++;
            frequency++;
        }
        cout<<"the frequency of "<<a[i-1]<<" is "<<frequency<<endl;
        i++;
        frequency=1;
    }
    if(n==1 || a[n-1]!=a[n-2])
    cout<<"the frequency of "<<a[n-1]<<" is 1";
}
int main()
{
    int a[]={1,1,2};
    int n=sizeof(a)/sizeof(int);
    frequency(a,n);
}