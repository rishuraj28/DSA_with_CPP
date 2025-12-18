// here we are demonstrating increasing the size of an array dynamically(heap) using pointers
#include<iostream>
using namespace std;
int main()
{
    int *p,*q;
    int i; 
    p=new int[5]; //initially allocating array of size 5
    p[0]=11;
    p[1]=13;
    p[2]=17;
    p[3]=19;
    p[4]=23;
    cout<<"Array elements are: ";
    for(i=0;i<5;i++)
    {
        cout<<p[i]<<" ";
    }
    delete[] p; //deallocating previous array

    q=new int[10]; //allocating new array of size 10
    // for(i=0;i<5;i++)
    // {
    //     q[i]=p[i]; //copying elements from previous array to new array
    // }
    p=q; //pointing p to new array
    cout<<endl;
    q=nullptr; //making q null pointer
    return 0;
}
