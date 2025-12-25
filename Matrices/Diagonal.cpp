// Implementation of diagonal matrix operations
#include<iostream>
using namespace std;

struct MATRIX {
    int A[10];
    int n;
};
void SetDiagonal(MATRIX *m, int i, int j, int x) {
    if (i == j)
        m->A[i - 1] = x;
}
int GetDiagonal(MATRIX m, int i, int j) {
    if (i == j)
        return m.A[i - 1];
    else
        return 0;
}
void DisplayDiagonal(MATRIX m) {
    for (int i = 1; i <= m.n; i++) {
        for (int j = 1; j <= m.n; j++) {
            if (i == j)
                cout << m.A[i - 1] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}
int main() {
    MATRIX m;
    m.n = 4; // Example size of the matrix
    // Initialize diagonal elements
    SetDiagonal(&m, 1, 1, 5);
    SetDiagonal(&m, 2, 2, 10);
    SetDiagonal(&m, 3, 3, 15);
    SetDiagonal(&m, 4, 4, 20);

    cout << "Diagonal Matrix:" << endl;
    DisplayDiagonal(m);

    int i = 2, j = 2;
    cout << "Element at (" << i << "," << j << "): " << GetDiagonal(m, i, j) << endl;

    i = 1; j = 2;
    cout << "Element at (" << i << "," << j << "): " << GetDiagonal(m, i, j) << endl;

    return 0;
}
