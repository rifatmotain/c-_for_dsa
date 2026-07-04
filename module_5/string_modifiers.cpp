#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="rifat";
    string s2="motain";
    //strcat(s,s2);   string concat korte hoito

    s= s+s2;
    s.append(s2);
    cout<<s<<endl;
    s.push_back('q');
    s.pop_back();    
    cout<<s<<endl;
    s.assign(s2);
    cout<<s<<endl;
    s.assign("motain");
    cout<<s<<endl;
    s.erase(3,2);
    s.erase(2);
    cout<<s<<endl;
    s.replace(2,0,"bangladesh");
    cout<<s<<endl;
    s.insert(2,"hsddddddddddoiusdddddddddd");
    cout<<s<<endl;
}