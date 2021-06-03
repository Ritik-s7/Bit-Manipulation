#include<iostream>
using namespace std;

// Method 1
int maxAND(int arr[], int N)
{
     int maxAnd = INT_MIN;
        int currMax=0;
        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                currMax = max((arr[i]&arr[j]),currMax);
            }
            
            maxAnd = max(currMax,maxAnd);
        }
        return maxAnd;

}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout << maxAND(arr,n);

}