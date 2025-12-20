#include <iostream>
using namespace std;

int main() {
    int A[3][4], B[4][3], C[3][3], T[3][3];

    // A matrisi
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++) {
            cout << "A[" << i+1 << "][" << j+1 << "]=";
            cin >> A[i][j];
        }

    // B matrisi
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 3; j++) {
            cout << "B[" << i+1 << "][" << j+1 << "]=";
            cin >> B[i][j];
        }

    // C = A * B
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 4; k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    // Transponir?
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            T[j][i] = C[i][j];

    cout << "Transponir? olunmus matris:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << T[i][j] << " ";
        cout << endl;
    }

    return 0;
}
