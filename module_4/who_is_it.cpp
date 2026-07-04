#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    string name;
    char section;
    int marks;
    Student(int i,string n,char s,int m)
    {
        id=i;
        name=n;
        section=s;
        marks=m;
    }
};
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int id, marks;
        string name;
        char section;
        cin>>id>>name>>section>>marks;
        Student s1(id,name,section,marks);
        cin >> id >> name >>section >> marks;
        Student s2(id, name, section, marks);
        cin >> id>> name>> section>> marks;
        Student s3(id, name, section, marks);
        Student ans = s1;
        if(s2.marks > ans.marks)
            ans = s2;
        else if(s2.marks == ans.marks && s2.id < ans.id)
            ans = s2;
        if(s3.marks > ans.marks)
            ans = s3;
        else if(s3.marks == ans.marks && s3.id < ans.id)
            ans = s3;
        cout << ans.id << " "<< ans.name << " "<< ans.section << " "<< ans.marks << endl;
    }
    return 0;
}