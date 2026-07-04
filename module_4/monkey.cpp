#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100001];
    while (cin.getline(s,100001))
    {
    int a = strlen(s);
    char s1[100001];
    int j=0;
    for(int i=0; i<a; i++)
    {
        if (s[i]!=' ')
        {
            s1[j] = s[i];
            j++;
        }
    }
    sort(s1,s1+j);
    s1[j]='\0';
    cout<<s1<<endl;
    }
}