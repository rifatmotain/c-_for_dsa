#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll, marks;
};

bool hello(student l, student r)
{
    if (l.marks > r.marks)
    {
        return true;
    }
    else if (l.marks > r.marks)
    {
        return false;
    }
    else
    {
        if (l.roll<r.roll)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    //return l.marks < r.marks;
}

int main()
{
    int n;
    cin >> n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a, a + n, hello);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
}