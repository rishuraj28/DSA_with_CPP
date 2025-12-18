#include<iostream>
using namespace std;

struct Array
{
    int A[10];
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
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void Reverse(struct Array *arr)
{
    int i,j;
    int *B;
    B=new int[arr->length];
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        swap(&arr->A[i],&arr->A[j]);
    }
}
void Reverse2(struct Array *arr)
{
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        swap(&arr->A[i],&arr->A[j]);
    }
}
int main()
{
    struct Array arr={{2,3,4,5,6},10,5};
    Reverse2(&arr);
    display(arr);
    return 0;
}