#include<iostream>
using namespace std;
class TEST
{
    int a,b,c;
    int avg(void);
public:
    void init(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void disp(void)
    {
        int R;
        R=avg();
        cout<<"Average value is: \n"<<R;
    }
};

int TEST ::avg(void)
{
    int d;
    d=(a+b+c)/3;
    return(d);
}

int main()
{
    TEST OBJ;
    int x,y,z;
    cout<<"Enter 3 values: \n";
    cin>>x>>y>>z;
    OBJ.init(x,y,z);
    OBJ.disp();
    return 0;
}
