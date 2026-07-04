#include<bits/stdc++.h>
using namespace std;
int main ()
{
    //int a[3];
    int *p = new int [5];
    for (int i=0; i<3; i++)
    {
        cin>> p[i];
    }

    for (int i=0; i<3; i++)
    {
        cout<< p[i]<< " ";
    }
    return 0;
}