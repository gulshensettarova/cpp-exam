#include <iostream>
using namespace std;

int main() {
    const int n = 8;
    double A[n], B[n], C[n];

    for (int i = 0; i < n; i++) {
        cout << "A[" << i+1 << "]=";
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cout << "B[" << i+1 << "]=";
        cin >> B[i];
    }

    for (int i = 0; i < n; i++)
        C[i] = (A[i] - B[i]) / (A[i] * B[i]);

    double max = C[0];
    for (int i = 1; i < n; i++)
        if (C[i] > max) max = C[i];

    cout << "C massivinin maksimumu = " << max;

    return 0;
}
