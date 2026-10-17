#include<iostream>
using namespace std ;
int main ()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int sum = 0;
    while(n!=0)
    {
        int ed = n%10;
        if(ed%2==0)
        {
            sum+=ed;
        }
        n /= 10;
    }
    cout<<"the sum of even digit is : "<<sum;
}