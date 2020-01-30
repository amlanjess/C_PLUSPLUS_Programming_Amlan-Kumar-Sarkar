#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int q=0,size,a[20],data,b[10];
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element u want to delete: ";
    cin>>data;
    for(int i=0;i<size;i++)
    {
        if(data!=a[i])
        {
         cout<<a[i];
        }
        else
        {
            continue;
        }
    }
}

