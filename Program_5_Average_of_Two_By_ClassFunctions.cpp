#include<iostream>
using namespace std;
class TEST
{
    int a,b;
    int avg(void);
public:
    void init(int x,int y)
    {
        a=x;
        b=y;
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
    d=(a+b);
    return(d);
}

int main()
{
    TEST OBJ;
    int x,y;
    cout<<"Enter 2 values: \n";
    cin>>x>>y;
    OBJ.init(x,y);
    OBJ.disp();
    return 0;
}

