#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5> a={1,2,3,4,5};
    for(int i=0;i<a.size();i++)
    cout<<a[i]<<" ";
    cout<<endl;
    cout<<"element at position 1"<<a.at(1)<<endl;
    cout<<"empty or not "<<a.empty()<<endl;
    cout<<"first element "<<a.front()<<endl;
    cout<<"last element "<<a.back()<<endl;
}