#include<iostream>
using namespace std;
int main ()
{
    int cp;
    cout<<"Enter the cost price of the product : ";
    cin>>cp;
    int sp;
    cout<<"Enter the selling price of the product : ";
    cin>>sp;
    if(sp<cp)
        {
            cout<<"The lost on the product is : "<<cp-sp;
        }
    if(sp>cp)
        {
            cout<<"The profit on the product is : "<<sp-cp;
        }
    else
        cout<<"No profit and loss";

}