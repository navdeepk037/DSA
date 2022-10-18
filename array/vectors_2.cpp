#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>
     v;
    cout<<"capacity is "<<v.capacity()<<endl;
    cout<<" size is "<<v.size()<<endl;
    v.push_back(1);
    cout<<"capacity is "<<v.capacity()<<endl;
    cout<<" size is "<<v.size()<<endl;
    v.push_back(2);
     cout<<"capacity is "<<v.capacity()<<endl;
    cout<<" size is "<<v.size()<<endl;
    v.push_back(3);
     cout<<"capacity is "<<v.capacity()<<endl;
    cout<<" size is "<<v.size()<<endl;
    v.push_back(4);
     cout<<"capacity is "<<v.capacity()<<endl;
    cout<<" size is "<<v.size()<<endl;
    cout<<"element at index 1 "<<v.at(1)<<endl;
    cout<<"element at first "<<v.front()<<endl;
    cout<<"element at end "<<v.back()<<endl ;
     cout<<"capacity before is "<<v.capacity()<<endl;
    cout<<" size before  is "<<v.size()<<endl;
    v.clear();
    cout<<"capacity after is "<<v.capacity()<<endl;
    cout<<" size after is "<<v.size()<<endl;
    vector<int> v2(v);
    for(int i=0;i<v2.size();i++)
    cout<<v2[i]<<" ";
    cout<<endl;


}