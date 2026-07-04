#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int cls;
    char sec;
    int id,math, eng;
};
bool hello(student l, student r)
{
    if (l.eng+l.math > r.eng+r.math)
    {
        return true;
    }
    else if (l.eng+l.math < r.eng+r.math)
    {
        return false;
    }
    else
    {
        if (l.id <r.id)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sec >>a[i].id >>a[i].math>>a[i].eng;
    }

    sort(a, a + n, hello);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " "<< a[i].id<< " "<< a[i].math << " "<< a[i].eng<<endl;
    }
}