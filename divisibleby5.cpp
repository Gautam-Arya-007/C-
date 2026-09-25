#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if(n<0)
        cout<<"Enter the Positive number";
    else if (n%5==0)
        cout<<"n is divisible by 5";
    else
        cout<<"n is not divisble by 5";
}