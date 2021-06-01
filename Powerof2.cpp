#include<iostream>
using namespace std;

bool Powerof2(int n)
{
    bool flag = true;
    if(n==0)
    {
        return false;
    }
    // n = 1000..... while n-1 = 0111..... 
    return ((n&(n-1))==0);

    
}

int main() 
{
    cout << Powerof2(4) <<endl; 
}