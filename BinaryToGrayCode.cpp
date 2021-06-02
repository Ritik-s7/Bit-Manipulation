#include<iostream>
using namespace std;


int BinaryToGray(int n)
{
     int n1 = n/2;
        int count = 0;
        int a = 0;
        int Xor;
        int i = 0;
        
        if(n==0)
        {
            return 0;
        }
        
        while(n1 != 0)
        {
            n1 = n1/2;
            count++;
        }
        //cout << count << endl;
        a = (1<<count);
        //cout << a<< endl;
        while(count>0)
        {
            Xor = ((n&1)^((n>>1)&1));
            //cout << Xor << " "<<(Xor << i )<<endl;
            a = (a|(Xor<<i));
            //cout << a <<endl;
            count--;
            i++;
            n = n >> 1;
            
        }
        return a;
        

}

int main()
{

    cout << BinaryToGray(10);
}