#include<iostream>
using namespace std;

class Circle
{
    int r;
    float ar;
public:
    Circle(int a)
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
    Rectangle(int a,int n,int m):Circle(a)
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
    cout<<"\nEnter sides:\n";
    cin>>c>>d;
    Rectangle OBJ(a,c,d);
    cout<<"\nCircle:\n";
    OBJ.disp();
    cout<<"\n\nRectangle:\n";
    OBJ.result();
    return 0;
}
