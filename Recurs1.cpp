#include<iostream>
using namespace std;

void printAllNumbers(int n)
{
    if(n==0)
    return;
    cout<<n<<endl;
    printAllNumbers(n-1);
}

int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    printAllNumbers(n);
}