// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for ( int i=0; i<n; i++)
//     {
//         cin >> a[i];
//     }
//     reverse(a,a+n);
//      for ( int i=0; i<n; i++)
//     {
//         cout << a[i] <<endl;
//     }
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    reverse(s.begin(),s.end());
     for ( int i=0; i<s.size(); i++)
    {
        cout << s[i];
    }
}