#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n, k;
    int count1=0, count2=0;
    cin >> n >>k;
    int a[n+1];
    for ( int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    for ( int i=k-1; i>0; i--)
    {
        if ( a[k]<a[i])
        {
            count1++;
        }
    }
    for ( int i=n; i>k; i--)
    {
        if ( a[k]>a[i])
        {
            count2++;
        }
    }
    cout << count1 << " "<< count2;
    return 0;
}