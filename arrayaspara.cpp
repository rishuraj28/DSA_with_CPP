#include <iostream>
using namespace std;

void fun(int A[])
{
   for(int i=0;i<5;i++)
    cout<<A[i]<<endl;
}

    

int main()
{
    int A[] = {10, 20, 30, 40, 50};

    int n = 5;

    fun(A);    
    cout<<sizeof(A)/sizeof(int)<<endl;

    for(int x:A)

    cout<<x<<"  ";

    return 0;
}