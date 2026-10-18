#include<iostream>
using namespace std ;
int main ()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int num = 0;
    while(n!=0)
    {
        int ld = n%10;
        num = num*10;
        num += ld;
        n /= 10;
    }
    cout<<"Reverse of number is : "<<num;
}