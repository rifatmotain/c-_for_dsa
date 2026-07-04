#include<bits/stdc++.h>
using namespace std; 
int main()
{
    string s;
    getline(cin,s);
    stringstream ss;
    int count =0;
    ss << s;
    string word;
    while (ss >> word)
    {
        if (word=="phitron" || word== "PHITRON" || word=="Phitron")
        count++;
    }
    cout << count;
    return 0;
}