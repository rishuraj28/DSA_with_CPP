#include<iostream>
using namespace std;

void printArray(int arr[], int i, int n)
{
    if(i == n)
    return;
    cout<<arr[i]<< " ";
    printArray(arr, i+1, n);
}

int main()
{
    int arr[] = { 10, 20, 30, 40, 50 };
    printArray(arr, 0, 5);
    return 0;
}
