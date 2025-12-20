#include <iostream>
using namespace std;

int main() {
    const int n = 14;
    int A[n], B[n], C[n];
    int m = 0;

    for (int i = 0; i < n; i++) {
        cout<<"A["<<i+1<<"]=";
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cout<<"B["<<i+1<<"]=";
        cin >> B[i];
    }

    for (int i = 0; i < n; i++) {
        int p = A[i] * B[i];
        if (p > 0)
            C[m++] = p;
    }

    for (int i = 0; i < m; i++)
        cout << C[i] << " ";

    return 0;
}
