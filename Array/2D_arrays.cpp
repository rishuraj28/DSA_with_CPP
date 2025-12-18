#include<iostream>
using namespace std;

int main()
{
    int A[2][3] = { {1,2,3}, {4,5,6} }; //2D static array allocation
    int i,j;
    int *B[3];
    B[0] = new int[2]; //dynamic array allocation for 1st row
    B[1] = new int[2]; //dynamic array allocation for 2nd row
    B[2] = new int[2]; //dynamic array allocation for 3rd row

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    int **C;
    C = new int*[2]; //allocating array of pointers for 2 rows
    C[0] = new int[3]; //allocating array for 1st row with 3 columns
    C[1] = new int[3]; //allocating array for 2nd row with 3 columns
    C[2] = new int[3]; //allocating array for 3rd row with 3 columns

    
    cout<<"2D Static Array A elements are: "<<endl;

    
    
}
