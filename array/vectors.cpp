#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
    cout<<"displaying this vector "<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
}
int main()
{
    vector<int> v;
    int element;
     cout<<"enter the elements ";
    for(int i=0;i<5;i++)
    {
        cin>>element;
        v.push_back(element);
    }
    display(v);
    v.pop_back();
    display(v);
    vector<int> ::iterator itr=v.begin();
    v.insert(itr,0); 
    display(v);
    v.insert(itr+1,5,-1);
    display(v);
    vector<int> v3(3,2);
    display(v3);
    
   
    }