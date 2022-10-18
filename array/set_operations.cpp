#include<iostream>
using namespace std;
void print_union(int arr1[],int n1,int arr2[],int n2)
{
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            cout<<arr1[i++]<<" ";
        }
        else if(arr1[i]>arr2[j])
        {
            cout<<arr2[j++]<<" ";
        }
        else
        {
            cout<<arr1[i++]<<" ";
            j++;

        }
    }
    for(;i<n1;i++)
    cout<<arr1[i]<<" ";
    for(;j<n2;j++)
    cout<<arr2[j]<<" ";
}
int main()
{
    int arr1[]={12,34,56,78,90};
    int arr2[]={23,45,67,78,90};
    int n1=sizeof(arr1)/sizeof(int );
    int n2=sizeof(arr2)/sizeof(int);
    print_union(arr1,n1,arr2,n2);

}