// Given an array of size n containing unique elements in the range [1,n+1] hence one element is missing. FInd the missing elements.
#include<iostream>
using namespace std;


// Method 1 - O(n) time and O(1) space
int missing(int arr[], int n)
{

    int sum = (n+1)*(n+2)/2;
    for(int i=0; i<n; i++)
    {
        sum -= arr[i];
    }

    return sum;
}
// Method 2 - Using XOR operator - O(n) time, O(1) space
int missing2(int arr[], int n)
{

    int xorOfall = 0;

    for(int i=1;i<=n+1;i++)
    {
        xorOfall = xorOfall^i;
    }

    for(int i=0; i<n; i++)
    {
        xorOfall = xorOfall^arr[i];
    }
    return xorOfall;

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

    cout << missing(arr,n) << endl;
    cout <<  missing2(arr,n);

    return 0;
}