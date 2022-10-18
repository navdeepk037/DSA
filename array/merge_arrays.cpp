#include<iostream>
using namespace std;
int* merge(int a1[],int n1,int a2[],int n2,int a3[])
{
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(a1[i]<a2[j])
        a3[k++]=a1[i++];
        else
        a3[k++]=a2[j++];
    }
    for(;i<n1;i++)
    a3[k++]=a1[i];
    for(;j<n2;j++)
    a3[k++]=a2[j];
    return a3;
}
int main()
{
    int a1[]={12,34,56,78,90};
    int a2[]={13,46,55,66,79};
    int n1=sizeof(a1)/sizeof(int);
    int n2=sizeof(a2)/sizeof(int);
    int a3[n1+n2];
    merge(a1,n1,a2,n2,a3);
    for(int i=0;i<n1+n2;i++)
    cout<<a3[i]<<" ";

}