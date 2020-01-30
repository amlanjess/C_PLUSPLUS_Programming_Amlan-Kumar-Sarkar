//Static Data Member & Function-Other Program
#include<iostream>
#include<conio.h>
using namespace std;

class Amlan
{
    int x;
    static int y;
public:
    void get(int a)
    {
        x=a;
        y++;
    }
    void disp()
    {
        cout<<x<<"    "<<y<<endl;
    }
};
int Amlan::y;
int main()
{
    Amlan ob1;
    Amlan ob2;
    ob1.get(100);
    ob2.get(200);
    ob1.disp();
    ob2.disp();
return 0;
}
