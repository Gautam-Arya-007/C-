#include<iostream>
using namespace std;
int main ()
{
    int a;
    cout<<"Enter the number :";
    cin>>a;
    if(a>=0)
        cout<<"the modulus of a is : "<<a;
    if(a<0)
        cout<<"the modulus of a is : "<<-a;
}