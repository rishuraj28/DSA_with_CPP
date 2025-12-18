#include<iostream>
using namespace std;

int fac(int n)
{
    if(n==0) return 1;
    else return n * fac(n-1);
}
int nCr(int n, int r)
{
    int num,den;
    num = fac(n);
    den = fac(r) * fac(n-r);
    return num/den;
}    
int main()
{
    int n,r;
    cout<<"Enter n and r: ";
    cin>>n>>r;
    cout<<"nCr is: "<<nCr(n,r);
    return 0;
}