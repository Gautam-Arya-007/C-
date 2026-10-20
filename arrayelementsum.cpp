#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of elements in array : ";
    cin>>n;
    int sum;
    int arr[n];
    sum = 0; 
    for(int i = 0;i<n;i++)
    {
        cout<<"Enter element : ";
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<"sum of elements is : "<<sum;
}