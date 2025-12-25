#include<iostream>
using namespace std;

int main()
{
    int a[3][3],b[3][3],i,j,f=0;
    cout<<"Enter elements of 3x3 matrix:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    
    // Checking symmetric matrix
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
        }
    }

    for(i=0;i<3;i++)
    cout<<"Transpose of the matrix is:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                f=1;
                break;
            }
        }
    }
    if(f==0)
    {
        cout<<"The given matrix is Symmetric Matrix"<<endl;
    }
    else
    {
        cout<<"The given matrix is not Symmetric Matrix"<<endl;
    }
  return 0;
}