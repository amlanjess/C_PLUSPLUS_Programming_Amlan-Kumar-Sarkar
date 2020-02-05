//Friend Function to find the Average of two number of different data numbers using two classes.
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
    friend float Avg(Amlan_1,Amlan);
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
    friend float Avg(Amlan_1,Amlan);
};

float Avg(Amlan_1 ob1,Amlan ob2)
{
    float i;
    i=(ob1.a+ob2.b)/2.0;
    return(i);
}

int main()
{
    Amlan_1 A;
    Amlan B;
    float R;
    A.get(50);
    B.findd(51);
    R=Avg(A,B);
    A.disp();
    B.show();
    cout<<"\nAverage number is= "<<R<<endl;
    return 0;
}

