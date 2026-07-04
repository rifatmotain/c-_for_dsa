#include<bits/stdc++.h>
using namespace std; 
int main()
{
    string s;
    cin >> s;
    int p=s.size();
    int sum1=0, sum2=0;
    int pos=1;
    for ( int i=p-1; i>=0;i--)
    {
        int digit = s[i] - '0';
        if (pos%2!=0)
        {
            sum1= sum1+digit;
        }
        else
        {
            sum2= sum2+digit;
        }
        pos++;
    }


    int x= abs (sum1-sum2);
    if (x%11==0)
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }
    return 0;
}