#include<iostream>
using namespace std;

// Count number of 1's in a binary form of a number

int count1(int n)
{
    int count = 0;
    while (n!=0)
    {
        n = (n&(n-1));
        count ++;
    }
    return count;
}

int main()
{
    cout << count1(19);
}