#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++) {
        cout << "A[" << i+1 << "]=";
        cin >> A[i];
    }

    for (int i = 0; i < n / 2; i++) {
        int temp = A[i];
        A[i] = A[n - 1 - i];
        A[n - 1 - i] = temp;
    }

    cout << "Ters massiv:\n";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}
