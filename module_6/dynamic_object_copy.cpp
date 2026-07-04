#include<bits/stdc++.h>
using namespace std;
int main ()
{
    class cricket
    {
        public:
        string country;
        int jersy;
        cricket (string country, int jersy)
        {
            this->country=country;
            this->jersy=jersy;
        }
    };
    cricket* dhoni =new cricket("india",100);
    cricket* kohli =new cricket("india",10);
    dhoni->country=kohli->country;
    dhoni->jersy=kohli->jersy;
    //*dhoni=*kohli;
    delete kohli;
    cout<< dhoni->country<< " "<<dhoni->jersy<<endl;
}