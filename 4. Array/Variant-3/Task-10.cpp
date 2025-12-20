#include <iostream>
using namespace std;

int main() {
    const int n = 15;
    int A[n], B[n];
    int m = 0;

    for (int i = 0; i < n; i++) {
        cout << "A[" << i+1 << "]=";
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        bool unique = true;
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                unique = false;
                break;
            }
        }
        if (unique)
            B[m++] = A[i];
    }

    cout << "Unikal massiv:\n";
    for (int i = 0; i < m; i++)
        cout << B[i] << " ";

    return 0;
}
