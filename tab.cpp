
#include<iostream>
using namespace std;

int mul(int a, int b)                                  //   3 + 3 + 3 + 3 
{                                                         //  3   2   1   3
    if(a==0 || b==0){return 0;}
    if(a==1) return b;
    if(b==1) return a;

    return (a + mul(a, b -1));
}

int multiply(int a , int b)
{
    int m = mul(a, abs(b));
     int mm=(b<0)? -m:m;
     return mm;
    
}
int main()
{
    cout <<multiply(3,4) <<endl;
    cout <<multiply(3,-4) <<endl;
}
