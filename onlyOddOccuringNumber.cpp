#include<iostream>
using namespace std;

int oddOccuring(int arr[], int n)
{
    int res = 0;

    for(int i=0;i<n;i++)
    {
        res = res ^ arr[i];
    }
    return res;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin >> arr[i];
    }

    cout << oddOccuring(arr,n);

    return 0;
}