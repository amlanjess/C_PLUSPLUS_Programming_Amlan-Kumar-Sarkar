//Nested or private member function
#include<iostream>
#include<conio.h>
using namespace std;

class TEST
{
    int a,b,c;
    float avg(void);
public:
    void init(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void disp(void)
    {
        float R;
        R=avg();
        cout<<"Average value is:  \n"<<R;
    }
};

float TEST::avg(void)
{
    float d;
    d=(a+b+c)/3.f;
    return(d);
}

int main()
{
    TEST OBJ;
    int x,y,z;
    cout<<"Enter three values: \n";
    cin>>x>>y>>z;
    OBJ.init(x,y,z);
    OBJ.disp();
    return 0;
}
