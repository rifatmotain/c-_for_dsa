#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin >>s;
        int a[26] = {0};
        for(int i = 0; i < s.size(); i++)
        {
            a[s[i] -'a']++;
        }
        int cnt = 0;
        for(int i = 0; i < 26; i++)
        {
            if(a[i] % 2!= 0)
            {
                cnt++;
            }
        }
        if(cnt == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << cnt - 1 << endl;
        }
    }
    return 0;
}