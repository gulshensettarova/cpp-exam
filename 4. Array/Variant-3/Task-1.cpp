#include <iostream>
using namespace std;

int main() {
    const int n = 15;
    int A[n], B[n], C[n];
    int k = 0;

    for (int i = 0; i < n; i++) {
        cout << "A[" << i+1 << "]=";
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cout << "B[" << i+1 << "]=";
        cin >> B[i];
    }

    for (int i = 0; i < n; i++) {
        if (A[i] == B[i] && A[i] != 0)
            C[k++] = A[i];
    }

    cout << "Yeni massiv:\n";
    for (int i = 0; i < k; i++)
        cout << C[i] << " ";

    return 0;
}
