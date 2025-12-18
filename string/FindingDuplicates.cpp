#include<iostream>
using namespace std;
int main()
{
    char A[]="Finding";
    int lastDuplicate=0;
    int i,j;
    // Finding duplicates in the string
    for(i=0;A[i]!='\0';i++)
    {
        for(j=i+1;A[j]!='\0';j++)
        {
            if(A[i]==A[j])
            {
                cout<<"Duplicate character found: "<<A[i]<<endl;
                lastDuplicate++;
                break;
            }
        }
    }
}