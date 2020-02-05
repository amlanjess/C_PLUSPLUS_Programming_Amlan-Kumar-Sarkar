#include<iostream>
using namespace std;
int FUN(int x[],int n,int &b,int &s)
{
    int R,i;
    b=x[0];
    for(i=1;i<n;i++)
    {
        if(b<x[i])
            b=x[i];
    }
    s=x[0];
    for(i=1;i<n;i++)
    {
        if(s>x[i])
            s=x[i];
    }
}

int main()
{
    int arr[50],n,i,L,M;
    cout<<"Enter the Limit:  \n";
    cin>>n;
    cout<<"Enter"<<n<<"values:\n";
    for(i=1;i<n;i++)
    {
        cin>>arr[i];
    }
    FUN(arr,n,L,M);
    cout<<"Smallest values: "<<M;
    cout<<"Biggest values: "<<L;
    return 0;
}

