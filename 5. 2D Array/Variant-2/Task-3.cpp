#include <iostream>
using namespace std;

int main() {
    int A[4][5];
    int P[5], T[4];
    int B, C;

    cin >> B >> C;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++) {
            cout << "A[" << i+1 << "][" << j+1 << "]=";
            cin >> A[i][j];
        }

    for (int j = 0; j < 5; j++)
        P[j] = A[1][j] * C;

    for (int i = 0; i < 4; i++)
        T[i] = A[i][3] / B;

    cout << "P massiv:\n";
    for (int j = 0; j < 5; j++) cout << P[j] << " ";

    cout << "\nT massiv:\n";
    for (int i = 0; i < 4; i++) cout << T[i] << " ";

    return 0;
}
