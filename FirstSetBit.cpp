#include<iostream>
#include<math.h>
using namespace std;

// Method 1
int firstSetBit(int n)
{
    int count = 0;
        if ((n&1)==1)
    {
        return 1;
    }
    
        while((n & 1) == 0 )
        {
          count ++;
         n = n >> 1;
        }
        if (count > 0)
        return count+1;
        else 
        return 0;


}

// Method 2

int firstSetBit2(int n)
{
    int num = (n & ~(n-1));
    return log2(num)+1;

}

int main()
{

cout << firstSetBit(32)<<endl;
cout << firstSetBit2(32);
}