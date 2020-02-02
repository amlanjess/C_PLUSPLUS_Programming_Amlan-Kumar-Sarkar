#include<iostream>
#include<conio.h>
using namespace std;
class Amlan
{
    int x;
public:
    void get(int a)
    {
        x=a;
    }
    void disp()
    {
        cout<<x<<endl;
    }
    friend void A();
};

void A()
{
    Amlan OB;
    OB.x=300;
    OB.disp();
}
int main()
{
    A();
    return 0;
}
