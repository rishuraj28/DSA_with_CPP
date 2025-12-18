#include<iostream>
using namespace std;

int main()
{
    char str[]="Orange County";
    int vowels=0, consonants=0;
    for(int i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
            switch(ch)
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    vowels++;
                    break;
                default:
                    consonants++;
            }
        }
    }
    cout<<"Number of vowels: "<<vowels<<endl;
    cout<<"Number of consonants: "<<consonants<<endl;
}