#include<iostream>
using namespace std;
int main()
{
    int del,i,n,c=0,a=1;
    int arr[100];
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element to delete"<<endl;
    cin>>del;
    for(i=0;i<n;i++)
	{
		if(arr[i]==del)
		{
			for(int j=i; j<(n-a);j++)
			{
				arr[j]=arr[j+1];
			}
			c++;
			a++;

			continue;
		}
	}
	if(c==0)
	{
		cout<<"Element not found";
	}
	else
	{
		cout<<"the new array is:";
		for(i=0;i<(n-1);i++)
		{
			cout<<arr[i]<<" ";
		}
	}
}
