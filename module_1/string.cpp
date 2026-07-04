#include<iostream>
int main()
{
    using namespace std;
    int a;
    cin >> a;
    cin.ignore();
    char x[100];
    //cin >> x;
    cin.getline(x,100);   //fgets(x,100,stdin)
    cout << a <<endl << x;
    return 0;

}