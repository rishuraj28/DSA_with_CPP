#include<iostream>
using namespace std;


int  tailFact(int n,  int acc = 1)
{
    if (n==0)
    return acc;
    return tailFact(n-1, n*acc);
}

int main()
{
    int n=5;
    cout<<tailFact(n);
    return 0 ;
}