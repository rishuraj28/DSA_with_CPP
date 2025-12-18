#include<iostream>
using namespace std;

int main()
{
    // char A[]="WELCOME";
    // int i;
    // // Convert to lowercase
    // for(i=0;A[i]!='\0';i++)
    // {
    //     A[i] = A[i] + 32;
    // }
    // cout<<"String in lowercase is: "<<A<<endl;
    // return 0;

    char A[100];
    cout<<"Enter a string: ";
    cin.getline(A,100);
    int i;
    // Convert to uppercase
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]>=97 && A[i]<=122)
            A[i] = A[i] - 32;
    }
    cout<<"String in uppercase is: "<<A<<endl;
    //convert to lowercase
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]>=65 && A[i]<=90)
            A[i] = A[i] + 32;
    }
    cout<<"String in lowercase is: "<<A<<endl;
    return 0;
}