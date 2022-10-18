#include<iostream>
using namespace std;
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int *rotate(int a[],int n,int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
    temp[i]=a[i];
    for(int i=d;i<n;i++)
    a[i-d]=a[i];
    for(int i=0;i<d;i++)
    a[n+i-d]=temp[i];
    return a;


}
int main()
{
    int a[]={1,2,3,4,5,6,7};
    int n=sizeof(a)/sizeof(int);
    cout<<"enter the value of d ";
    int d;
    cin>>d;
    rotate(a,n,d);
    display(a,n);


 }