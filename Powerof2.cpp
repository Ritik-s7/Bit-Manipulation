#include<iostream>
using namespace std;

bool Powerof2(int n)
{
    bool flag = true;
    int i=0;
    // n = 1000..... while n-1 = 0111.....
    return (n && !(n & (n-1)));

    
}

int main() 
{
    cout << Powerof2(4) <<endl; 
}