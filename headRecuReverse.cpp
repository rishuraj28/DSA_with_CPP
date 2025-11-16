#include<iostream>
using namespace std;

void printInc(int n)
{
    if(n==0)
    return;
    printInc(n-1); //head call first
    cout<< n << " "; //work after returning
}

int main()
{
    // int n;
    // cout<<"enter the number :";
    // cin>>n;
    // printInc(n);
    printInc(5);
    return 0;
}