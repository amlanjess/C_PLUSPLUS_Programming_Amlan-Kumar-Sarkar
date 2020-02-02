
#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;
int big(int x[],int n)
{
    int R,i;
    R=x[0];
    for(i=0;i<n;i++)
    {
        if(R<x[i])
            R=x[i];
    }
    return R;
}

int small(int x[],int n)
{
    int R,i;
    R=x[0];
    for(i=0;i<n;i++)
    {
        if(R>x[i])
            R=x[i];
    }
    return R;
}

int main()
{
    int a[50],n,i;
    cout<<"Enter the limit:";
    cin>>n;
    cout<<"Enter:"<<n<<"values:\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Smallest Value: "<<small(a,n);
    cout<<"\nLargest Value: "<<big(a,n);
}
