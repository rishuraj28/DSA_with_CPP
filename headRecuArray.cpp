#include<iostream>
using namespace std;

void printReverse(int arr[], int i, int n)
{
    if (i == n) 
    return;
    printReverse(arr, i+1, n); //head call first
    cout << arr[i] << " "; //work after returning
}

int main()
{
    int arr[] = {1,2,3,4,5};
    printReverse(arr, 0, 5);
    return 0;
}