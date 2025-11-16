#include<iostream>
using namespace std;

void factorial(int n, int &fact)
{
    if(n==0)
    {
        return;
    }
    fact = fact * n;
    factorial(n-1, fact);
}
int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    int fact = 1;
    factorial(n, fact);
    cout<<"factorial is:"<<fact<<endl;
}