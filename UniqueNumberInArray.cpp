#include<iostream>
using namespace std;

// Things in this files are messed up, Do it again. This concept is not clear.


// XOR bitwise operator 
// Gives 1 when exactly one value is 1 otherwise it gives 0 - ex (1,1=0) (1,0=1), (0,1=1), (0,0=0)

int uniqueNum(int arr[], int n)
{
    int xorSum = 0;

    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum^arr[i];
        //cout << xorSum;
    }
    return xorSum;
    
}

bool getBit(int n, int pos)
{
    return ((n & (1<<pos)) != 0);
}

int setBit(int n, int pos)
{
    return ((n | (1 << pos)) != 0);
}


void TwoUniqueNum(int arr[], int n)
{
    int xorSum = 0;
    for(int i=0;i<n;i++)
    {
        xorSum = xorSum^arr[i];
    }
    int tempxor = xorSum;
    int setbit = 0;
    int pos = 0;
    while (setbit != 1)
    {
        setbit = xorSum & 1;
        pos++;
        xorSum = xorSum  >> 1;
    }
    
    int newxor=0;
    for (int i = 0; i < n; i++)
    {
        if (setBit(arr[i],pos-1))
        {
            newxor = newxor^arr[i];
        }
    }

    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
    
    
}


int ThreeUniqueNum(int arr[], int n)
{
    int result = 0;
    for(int i=0; i<64; i++)
    {
        int sum=0;
        for(int j=0; j<n;j++)
        {
            if(getBit(arr[j],i))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            result = setBit(result,i);
        }
        
    }
    return result;
}
 
int main()
{
    int arr[] = {2,4,6,3,4,6,2};
    int arr2[] = {2,4,6,7,4,5,6,2};
    int arr3[] = {1,2,3,4,1,2,3,1,2,3};
    cout << uniqueNum(arr,7)<<endl;
    TwoUniqueNum(arr2,8); 
    cout <<(1^2)<<endl;
    cout << ThreeUniqueNum(arr3,10)<<endl;
}