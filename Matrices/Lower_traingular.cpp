#include<iostream>
using namespace std;

int main()
{
    int a[3][3], i, j;
    cout << "Enter elements of 3x3 matrix:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < 3; i++)
        {
         for (j = 0; j < 3; j++)
         {
             if (i > j)
             {
                 cout << a[i][j] << " ";
             }
         }
        }
    // upper triangular matrix
    // cout << "Upper Triangular Matrix:" << endl;
    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         if (i < j)
    //         {
    //             cout << a[i][j] << " ";
    //         }
    //     }
    // }
    return 0;
}