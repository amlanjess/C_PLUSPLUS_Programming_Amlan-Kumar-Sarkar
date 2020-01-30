//Static Member Function
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
        cout<<x<<"    "<<y;
    }
    static void PR()
    {
        cout<<"\n"<<y<<endl;
    }
};
int Amlan::y;
int main()
{
    Amlan ob1;
    Amlan ob2;
    ob1.get(100);
    Amlan::PR();
    ob2.get(200);
    Amlan::PR();
    return 0;
}

