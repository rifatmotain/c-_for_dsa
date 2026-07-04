#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s= "rifat motain rahat ratu";
    cout <<s.size()<<endl;
    cout <<s.max_size()<<endl;
    cout <<s.capacity()<<endl;
    s.clear();
    cout<<s<<endl;

    if (s.empty()==true)
    {
        cout<<"empty"<<endl;
    }
    else
    {
        cout<<"empty"<<endl;
    }
    cout <<s.size()<<endl;
    s.resize(10);
    cout<<s<<endl;
}