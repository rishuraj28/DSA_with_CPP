#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str,100);
    int i;
    // Validate if the string contains only alphabets
    for(i=0;str[i]!='\0';i++)
    {
        if(!((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || str[i]==' '))
        {
            cout<<"String contains invalid characters."<<endl;
            return 0;
        }
    }
    cout<<"String is valid and contains only alphabets."<<endl;
    return 0;
}