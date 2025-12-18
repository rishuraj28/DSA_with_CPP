#include<iostream>
using namespace std;

int fibonacci(int n)
{
    int t0 = 0, t1 = 1, i,s=0;
    if(n<=1)
    return n;
    for(i=2;i<=n;i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}
int main()
{
   cout<< "fibonacci series up to 10 terms: " << fibonacci(10);
return 0;
}



