#include<iostream>
using namespace std;
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int * moving(int a[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            swap(a[count],a[i]);
            count++;
                    }

    }
    return a;
}
int main()
{
    int a[]={1,2,0,0,4,0,5,0};
    int n1=sizeof(a)/sizeof(int);
    moving(a,n1);
    display(a,n1);
}