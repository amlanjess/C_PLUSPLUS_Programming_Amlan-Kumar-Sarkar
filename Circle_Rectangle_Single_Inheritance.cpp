#include<iostream>
using namespace std;

class Circle
{
    int r;
    float ar;
public:
    void get(int a)
    {
        r=a;
    }
    void disp()
    {
        cout<<"Area="<<3.14*r*r;
    }
};
class Rectangle:public Circle
{
    int l,b;
public:
    void init(int m,int n)
    {
        l=m;
        b=n;
    }
    void result()
    {
        cout<<"Area="<<l*b;
    }
};

int main()
{
    int a,c,d;
    cout<<"Enter the radius:\n";
    cin>>a;
    Rectangle OBJ;
    OBJ.get(a);
    cout<<"\nEnter sides:\n";
    cin>>c>>d;
    OBJ.init(c,d);
    cout<<"\nCircle:\n";
    OBJ.disp();
    cout<<"\n\nRectangle:\n";
    OBJ.result();
    return 0;
}
