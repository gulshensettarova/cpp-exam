#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int A[n + m], B[m];

    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < m; i++) cin >> B[i];

    for (int i = n - 1; i >= k; i--)
        A[i + m] = A[i];

    for (int i = 0; i < m; i++)
        A[k + i] = B[i];

    cout << "Yeni massiv:\n";
    for (int i = 0; i < n + m; i++)
        cout << A[i] << " ";

    return 0;
}
