#include<iostream>
using namespace std;

// Count number of 1's in a binary form of a number
// Method 1 - Brian Kerningham's Algorithm - Theeta(no. of set bits)
int Brian_KerninghamAlgorithm(int n)
{
    int count = 0;
    while (n!=0)
    {
        n = (n&(n-1));
        count ++;
    }
    return count;
}

// Method 2 - Lookup table method (for 32 bits) - Theeta(1) after doing some preprocessing
int table[256];
int LookupTableMethod(int n)
{

        int res = table[n & 0xff];
        n =  n >> 8;

        res = res + table[n & 0xff];
        n =  n >> 8;

        res = res + table[n & 0xff];
        n =  n >> 8;

        res = res + table[n & 0xff];
    return res;
}
int main()
{

    table[0]=0;
    for (int i = 1; i < 256; i++)
    {
        table[i]=(i & 1)+table[i/2];
    } 
    cout << Brian_KerninghamAlgorithm(24)<<endl;
    cout << LookupTableMethod(3)<<endl;

} 