#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    stringstream ss;
    ss << s;
    string word;
    int x=0;
    while (ss>>word)
    {
        if (word == "Jessica")
        {
            x=1;
            break;
        }
    }
    if (x==1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

}