#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int cls;
    double gpa;
    student(int r, int c, double g)
    {
        roll=r;
        cls=c;
        gpa=g;
    }
};
int main()
{
    student rahim(10, 5, 4.5);
    // rahim.roll=10;
    // rahim.cls=5;
    // rahim.gpa=4.5;
    cout<< rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
}