#include<iostream>
using namespace std;

int sum(int n)
{
    if(n==0)
    return 0;
    else
    return (n * (n+1))/2; //formula for sum of first n natural numbers
}

int main()
{
    int n;
    cout<<"Enter a natural number: ";
    cin>>n;
    cout<<"Sum of first "<<n<<" natural numbers is: "<<sum(n);
}
