#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int cls;
    double gpa;

    student(int roll, int cls, double gpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;;
    }
};
student* fun()
{
    student* rahim = new student(10, 5, 4.5);
    return rahim;
}
int main()
{
    student* v= fun();
    cout<< v->roll<<" "<<v->cls<<" "<<v->gpa<<endl;
}