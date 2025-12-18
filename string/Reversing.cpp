#include<iostream>
using namespace std;
int main()
{
    char A[]="Python";
    char B[7];
    int i,j;
    // Reversing string A into string B
    for(i=0,j=5;i<6;i++,j--)
    {
        B[j]=A[i];
    }
    B[6]='\0'; // Null-terminating the reversed string
    cout<<"Original string A: "<<A<<endl;
    cout<<"Reversed string B: "<<B<<endl;
    return 0;
}