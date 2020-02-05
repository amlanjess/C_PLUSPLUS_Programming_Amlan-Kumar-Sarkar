//Friend Function to find the greater value of two different number using two classes.
#include<iostream>
using namespace std;

class Amlan;
class Amlan_1
{
int a;
public:
    void get(int x)
    {
        a=x;
    }
    void disp()
    {
        cout<<"First number is: "<<a<<endl;
    }
    friend int Big(Amlan_1,Amlan);
} ;

class Amlan
{
int b;
public:
    void findd(int x)
    {
        b=x;
    }
    void show()
    {
        cout<<"Second number is : "<<b<<endl;
    }
    friend int Big(Amlan_1,Amlan);
};

int Big(Amlan_1 ob1,Amlan ob2)
{
    if(ob1.a>ob2.b)
    {
        return(ob1.a);
    }
    else
    {
        return(ob2.b);
    }
}

int main()
{
    Amlan_1 A;
    Amlan B;
    int R;
    A.get(50);
    B.findd(100);
    R=Big(A,B);

    A.disp();
    B.show();
    cout<<"\nBiggest number = "<<R<<endl;
    return 0;
}
