// #include<bits/stdc++.h>
// using namespace std;
// class student
// {
//     public:
//     char name[100];
//     int roll;
//     double gpa;
// };
// int main()
// {
//     student a;
//     a.roll=10;
//     a.gpa=4.98;
//     char temp[100]= "rifat";
//     strcpy(a.name,temp);
//     cout << a.name<< " "<<a.roll<< " "<<a.gpa<<endl;
// }

#include<bits/stdc++.h>
using namespace std;
class stdudent
{
    public:
    char name[100];
    int roll;
    double gpa;
};
int main ()
{
    stdudent b,c;
    cin.getline(b.name,100);
    cin >> b.roll >> b.gpa;
    cin.ignore();
    cin.getline(c.name,100);
    cin>>c.roll>>c.gpa;
    cout<< b.name<<" "<< b.roll<< " "<<b.gpa<<endl;
    cout<< c.name<<" "<< c.roll<< " "<<c.gpa<<endl;
}