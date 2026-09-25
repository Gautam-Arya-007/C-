#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    if(n>99 && n<1000)
        {
            cout<<"The Number is 3 digit number";
        }
    else
        cout<<"The number is not 3 digit number";
}