#include<iostream>
using namespace std;
int main()
{
    char A[100];
    cout<<"Enter a string: ";
    cin.getline(A,100);
    char B[100];
    int i,j;
    // Reversing string A into string B
    for(i=0;A[i]!='\0';i++)
    {
    }
    i--;
    for(j=0;i>=0;i--,j++)
    {
        B[j]=A[i];
    }
    B[j]='\0'; // Null-terminating the reversed string
    // Checking if A and B are the same or not
    int isPalindrome=1;
    for(i=0,j=0;A[i]!='\0' && B[j]!='\0';i++,j++)
    {
        if(A[i]!=B[j])
        {
            isPalindrome=0;
            break;
        }
    }
    if(isPalindrome)
        cout<<"String is palindrome."<<endl;
    else
        cout<<"String is not palindrome."<<endl;
    return 0;
}