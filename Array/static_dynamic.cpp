#include<iostream>
using namespace std;

int main()
{
    int A[5]={2,3,4,6,7};//static array allocation
    int *p;
    int i;

    p=new int[5]; //dynamic array allocation
    p[0]=11;
    p[1]=13;
    p[2]=17;
    p[3]=19;
    p[4]=23;
    cout<<"Static array elements are: ";
    for(i=0;i<5;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    cout<<"Dynamic array elements are: ";
    for(i=0;i<5;i++)
    {
        cout<<p[i]<<" ";
    }
    delete[] p;
    return 0;
}