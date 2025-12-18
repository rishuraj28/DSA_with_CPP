#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;

};


void merge(struct Array *arr1, struct Array *arr2, struct Array *arr3)
{
    int i,j,k;
    i=j=k=0;
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
            arr3->A[k++]=arr1->A[i++];
        else
            arr3->A[k++]=arr2->A[j++];
    }
    for(;i<arr1->length;i++)
        arr3->A[k++]=arr1->A[i];
    for(;j<arr2->length;j++)
        arr3->A[k++]=arr2->A[j];
    arr3->length=arr1->length+arr2->length;
    arr3->size=10;
}
void display(struct Array arr)
{
    int i;
    cout<<"Array elements are: ";
    for(i=0;i<arr.length;i++)
    cout<<arr.A[i]<<" ";
    cout<<endl;
}
int main()
{
    struct Array arr1={{2,4,6,8,10},10,5};
    struct Array arr2={{1,3,5,7,9},10,5};
    struct Array *arr3;
    arr3=new struct Array;
    merge(&arr1,&arr2,arr3);
    display(*arr3);
    return 0;

}