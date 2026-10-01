#include<iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout<<"Enter the first number : ";
    cin>>a;
     cout<<"Enter the second number : ";
    cin>>b;
     cout<<"Enter the third number : ";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"First number is greatest : "<<a;
    }
    else if(b>a && b>c)
    {
        cout<<"second number is greatest : "<<b; 
    }
    else
    {
        cout<<"third number is greatest : "<<c;
    }
}