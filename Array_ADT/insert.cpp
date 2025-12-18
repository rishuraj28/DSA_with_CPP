#include<iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void display(struct Array arr)
{
    int i;
    cout<<"Array elements are: ";
    for(i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
} 

int main()
{
    struct Array arr;
    int n,i;
    cout<<"Enter size of array: ";
    cin>>arr.size;
    arr.A=new int[arr.size]; //dynamic array allocation
    arr.length=0;
    
    cout<<"Enter number of elements to insert: ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr.A[i];
        arr.length++;
    }

    display(arr);

    return 0;
}


