#include<bits/stdc++.h>
using namespace std;
int main ()
{
    class student
    {
        public:
        string name;
        int roll;
        int math,eng;
        student (string name, int roll, int math, int eng)
        {
            this->name=name;
            this->roll=roll;
            this->math=math;
            this->eng=eng;
        }

            void hello()
            {
                cout << "total marks of " << name << "=" << math+eng<<endl;
            }
    };
    student sakib("sakib ahmed", 1, 90,92);
    sakib.hello();
    student rifat ("rifat",2,30,40);
    rifat.hello();
}