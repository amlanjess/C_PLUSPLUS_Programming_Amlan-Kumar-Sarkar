#include<iostream>
using namespace std;
void area(int);
void area(int,int);
void area(int,int,int);
int main()
{
    int r,l,m,i,g,h;
    cout<<"\nenter the r=:";
    cin>>r;
    area(r);
    cout<<"\nenter the len:";
    cin>>l;
    cout<<"enter the brth:";
    cin>>m;
    area(l,m);
    cout<<"enter the i,g,h";
    cin>>i>>g>>h;
    area(i,g,h);
    return 0;
}
void area(int r)
{
    float p=3.14;
    int are;
    are=p*r*r;
    cout<<"area of the circle is:"<<are;
    cout<<"\n";
}
void area(int l,int m)
{
    int ar;
    ar=l*m;
    cout<<"area of the rectangle is :"<<ar;
    cout<<"\n";
}
void area(int i,int g,int h)
{
    int k;
    k=i*g*h;
    cout<<"area of clone is:"<<k;
}

