#include<iostream>
using namespace std;

struct Array
{
    int A[15];
    int size;
    int length;
};
void display(struct Array arr)
{
    int i;
    cout<<"Array elements are: ";
    for(i=0;i<arr.length;i++)
        cout<<arr.A[i]<<" ";
    cout<<endl;
}
// int BinarySearch(struct Array arr, int key)
// {
//     int l=0;
//     int h=arr.length-1;
//     int mid;
//     while(l<=h)
//     {
//         mid=(l+h)/2;
//         if(key==arr.A[mid])
//             return mid;
//         else if(key<arr.A[mid])
//             h=mid-1;
//         else
//             l=mid+1;
//     }
//     return -1;
// }
int RBinSrch(struct Array arr, int l, int h, int key)
{
    int mid;
    if(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            return RBinSrch(arr, l, mid-1, key);
        else
            return RBinSrch(arr, mid+1, h, key);
    }
    return -1;
}
int main()
{
    struct Array arr={{2,3,4,5,6,7,8},15,7};
    cout<<RBinSrch(arr, 0, arr.length-1, 5)<<endl;
    display(arr);
    return 0;
} 