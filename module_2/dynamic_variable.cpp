// declaration of dynamic variable

// #include<bits/stdc++.h>
// using namespace std;
// int main ()
// {
//     int x=10;
//     int* p = new int;
//     *p= 100;
//     cout<<x<<endl<<*p<<endl;
//     return 0;
// }



// prove of stay of dybamic memory


#include<bits/stdc++.h>
using namespace std;

int* x;
void fun()
{
    int* p = new int;
    *p= 10;
    x=p;
    cout<< " fun function x= "<<*x<<endl;

}
int main ()
{
    fun();
    cout<< " main function x= "<<*x;
    return 0;
}