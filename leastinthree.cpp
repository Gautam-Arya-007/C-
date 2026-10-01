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
    if(a<b && a <c)
    {
        cout<<"First number is number is minimum : "<<a;
    }
    else if(b<a && b<c)
    {
        cout<<"Second number is number is minimum : "<<b;
    }
    else
        cout<<"Third number is number is minimum : "<<c;
}