#include<iostream>
using namespace std;
int main()
{
    char A[100];
    char B[100];
    cout<<"Enter first string: ";
    cin.getline(A,100);
    cout<<"Enter second string: ";  
    cin.getline(B,100);
    int i,j;
    // Comparing two strings
    for(i=0,j=0;A[i]!='\0' && B[j]!='\0';i++,j++)
    {
        if(A[i]!=B[j])
            break;
    }
    if(A[i]=='\0' && B[j]=='\0')
        cout<<"Strings are equal."<<endl;
    else
        cout<<"Strings are not equal."<<endl;

    return 0;
}