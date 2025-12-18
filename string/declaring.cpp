#include<iostream>
using namespace std;

// it is created in stack memory
// char name[10]={'j','o','h','n','\0'};

// it is created in heap memory
char *name="John doe";
int main()
{
    cout<<"Name is: "<<name<<endl;
    return 0;
}