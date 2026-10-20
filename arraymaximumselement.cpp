#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of elements in array : ";
    cin>>n;
    int arr[n];
    int mx = arr[0];
    for(int i = 0;i<n;i++)
    {
        cout<<"Enter element : ";
        cin>>arr[i];
        mx = max(mx,arr[i]);
    }
    cout<<"maximum number is : "<<mx;
}
