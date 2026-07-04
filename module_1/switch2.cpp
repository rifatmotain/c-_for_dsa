#include<iostream>
int main()
{
    using namespace std;
    int x;
    cin>> x;
    switch (x%2)
    {
        case 0: cout<<"even"; break;
        case 1: cout<<"odd"; break;
    }

}