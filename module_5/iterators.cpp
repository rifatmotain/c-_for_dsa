#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="hello";
    cout<<s.size()<<endl;
    // for (int i=0; i<s.size(); i++)
    // {
    //     cout<< s[i]<< endl;
    // }

    // for (string:: iterator i=s.begin(); i<s.end(); i++)
    // {
    //     cout<< *i<< endl;
    // }

    for (auto i=s.begin(); i<s.end(); i++)
    {
        cout<< *i<< endl;
    }
    return 0;
}