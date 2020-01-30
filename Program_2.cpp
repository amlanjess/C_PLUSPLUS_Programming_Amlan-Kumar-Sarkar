#include<iostream>
using namespace std;
int big(int x[],int n)
{
    int i;
    int R=x[0];
    for(i=1;i<n;i++)
    {
        if(R<x[i])
            R=x[i];
    }
    return R;
}
int small (int x[],int n)
{
    int R,i;
    R=x[0];
    for(i=1;i<n;i++)
    {
        if(R<x[i])
            R=x[i];
    }
    return R;
}

int main()
{
    int arr[50],n,i;
    cout<<"Enter: "<<n<<" Values:  \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Smallest values: "<<small(arr,n);
    cout<<"Biggest values: "<<big(arr,n);
    return 0;
}
