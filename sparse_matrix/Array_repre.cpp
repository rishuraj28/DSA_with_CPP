#include<iostream>
using namespace std;

int main()

{
    int m, n;
    cout << "Enter number of rows and columns of the matrix: ";
    cin >> m >> n;

    int A[10][10]; // Assuming maximum size of 10x10 for simplicity
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    int size=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i][j] != 0)
            {
                size++;
            }
        }
    }

    int sp[size][3];
    int row=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i][j] != 0)
            {
               sp[row][0]=i;
               sp[row][1]=j;
               sp[row][2]=A[i][j];
               row++;
            }
        }
    }
    cout << "Sparse Matrix is:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << sp[i][j] << " ";
        }
        cout << endl;
    }

    // int B[10][10]; // Initialize all elements to 0
    // cout << "Enter elements of the matrix:" << endl;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> A[i][j];
    //     }
    // }

    // int size=0;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (A[i][j] != 0)
    //         {
    //             size++;
    //         }
    //     }
    // }

    // int sp1[size][3];
    // int row1=0;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (A[i][j] != 0)
    //         {
    //            sp1[row1][0]=i;
    //            sp1[row1][1]=j;
    //            sp1[row1][2]=A[i][j];
    //            row1++;
    //         }
    //     }
    // }
    // cout << "Sparse Matrix is:" << endl;
    // for (int i = 0; i < row1; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << sp1[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // // Adding two sparse matrices
    // int sp3[size+size][3]; // Maximum possible size
    // int k=0, i=0, j=0;
    // while(i<row && j<row1)
    // {
    //     if(sp[i][0]==sp1[j][0] && sp[i][1]==sp1[j][1])
    //     {
    //         sp3[k][0]=sp[i][0];
    //         sp3[k][1]=sp[i][1];
    //         sp3[k][2]=sp[i][2]+sp1[j][2];
    //         i++;
    //         j++;
    //         k++;
    //     }
    //     else if(sp[i][0]<sp1[j][0] || (sp[i][0]==sp1[j][0] && sp[i][1]<sp1[j][1]))
    //     {
    //         sp3[k][0]=sp[i][0];
    //         sp3[k][1]=sp[i][1];
    //         sp3[k][2]=sp[i][2];
    //         i++;
    //         k++;
    //     }
    //     else
    //     {
    //         sp3[k][0]=sp1[j][0];
    //         sp3[k][1]=sp1[j][1];
    //         sp3[k][2]=sp1[j][2];
    //         j++;
    //         k++;
    //     }
    // }

    // while(i<row)
    // {
    //     sp3[k][0]=sp[i][0];
    //     sp3[k][1]=sp[i][1];
    //     sp3[k++][2]=sp[i++][2];
    // }

    // while(j<row1)
    // {
    //    while (j < row1)
    // {
    //    sp3[k][0] = sp1[j][0];
    //    sp3[k][1] = sp1[j][1];
    //    sp3[k][2] = sp1[j][2];
    //    j++;
    //    k++;
    // }

    // }

    // cout << "Sum of sparse matrices is:" << endl;
    // for (int i = 0; i < k; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << sp3[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}