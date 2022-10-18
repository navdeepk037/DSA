#include<iostream>
using namespace std;
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
void intersection(int a1[],int n1,int a2[],int n2)
{
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(a1[i]<a2[j])
        i++;
        else if(a2[j]<a1[i])
        j++;
        else{
            cout<<a1[i]<<" ";
            i++;
            j++;
        }
    }

}
int main()
{
    int a1[]={12,34,56,67,89,90};
    int a2[]={21,34,55,67,89,90};
    int n1=sizeof(a1)/sizeof(int);
    int n2=sizeof(a2)/sizeof(int);
    int a3[n1+n2];
    intersection(a1,n1,a2,n2);
}