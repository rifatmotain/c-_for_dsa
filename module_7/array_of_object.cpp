#include<bits/stdc++.h>
using namespace std;
int main ()
{
    class student
    {
        public:
        string name;
        int roll,marks;

    };

    int n;
    cin>> n;
    student a[n];
    for ( int i=0; i<n; i++)
    {
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }

    for ( int i=0; i<n; i++)
    {
        cout<< a[i].name <<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
}