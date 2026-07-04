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

    student min;
    min.marks= INT_MAX;
    for ( int i=0; i<n; i++)
    {
        if (a[i].marks<min.marks)
        {
            min=a[i];
        }
    }
    cout<< min.name <<" "<<min.roll<<" "<<min.marks<<endl;
}