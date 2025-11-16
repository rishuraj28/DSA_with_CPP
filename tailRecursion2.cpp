#include<iostream>
using namespace std;

int sumTail(int n, int sum = 0)
{
    if(n==0)
    return sum;
    return sumTail(n-1, sum + n);
}

int main()
{
    int n=10;
    cout<<sumTail(n);
    return 0;
}