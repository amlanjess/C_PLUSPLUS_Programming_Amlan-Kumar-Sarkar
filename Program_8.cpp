#include<iostream>
using namespace std;
int main(){
int a[50];
int n,op;
cout << "No. Of Elements:";
cin >> n;
for(int i=0;i<n;i++){cin >> a[i];}
char ch='y';
while(ch=='y'||ch=='Y'){
cout <<"X-----------------------------X\n";
cout << "1.Sort Array\n2.Delete Element\n3.Add Element\n";
cout <<"X-----------------------------X\n";
cout << "Choose An Option:";
cin >> op;int temp=0,p;
switch(op){
case 1:
        for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
        }}}
        for(int i=0;i<n;i++){cout << a[i] << " ";}
        break;
case 2: cout << "Position to be Deleted:";
        cin >> p;
        p=p-1;
        for(int i=p;i<n;i++){a[i]=a[i+1];}
        cout << "New Array:\t";
        for(int i=0;i<n-1;i++){cout << a[i] <<" ";}
        break;
case 3: cout << "Enter Position :";
        cin >> p;
        p=p-1;
        cout << "Enter Element:";
        int val;
        cin >> val;
        for(int i=n;i>=p;i--){a[i+1]=a[i];}
        a[p]=val;
        for(int i=0;i<n+1;i++){cout << a[i] << " ";}
        break;
default:cout <<"Invalid Operation..";
}
cout <<"\nDo you wish to Continue?:";
cin >> ch;
}
return 0;
}
