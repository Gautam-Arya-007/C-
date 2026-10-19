#include<iostream>
using namespace std;
int main ()
{
    int a = 4;
    cout<<a;
    cout<<&a;
    int* p = &a;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p;
}