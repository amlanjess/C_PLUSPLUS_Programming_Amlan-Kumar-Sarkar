#include<iostream>
using namespace std;
int sum(int,int,int,int,int);
int mul(int,int,int,int,int);
int main()
{
     int a,b,c,d,e,n,i;
     cout<<"enter any 5 value:\n";
     cin>>a>>b>>c>>d>>e;
     cout<<"sum of the two no is:"<<sum(a,b,c,d,e);
     cout<<"\nmul of the two no is:"<<mul(a,b,c,d,e);
     {
        cout<<"\n\nenter the no of element:";
        cin>>n;
        int arr[n],temp,j;
        cout<<"enter the array element:";

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"\nthe array elements are:";
        for(i=0;i<n;i++)
        {
            cout<<" "<<arr[i];
        }
            for(i=0;i<n;i++)
                {
                    for(j=0;j<n-1-i;j++)
                    {
                        if(arr[i]<arr[j])
                            {
                                temp=arr[j];
                                arr[i]=arr[j];
                                arr[j]=temp;
                            }
                    }
                }
            cout<<"\nsorted elements in array is:";
            for(i=0;i<n;i++)
            {
                cout<<arr[i];
            }

    }
    return 0;

}
int sum(int a,int b,int c,int d,int e)
{
    int k;
    k=a+b+c+d+e;
    return k;
}
int mul(int a,int b,int c,int d,int e)
{
    int m;
    m=a*b*c*d*e;
    return m;
}

