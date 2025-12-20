#include <iostream>
using namespace std;

int main() {
    const int n = 10;
    int A[n];

    for (int i = 0; i < n; i++) {
        cout << "A[" << i+1 << "]=";
        cin >> A[i];
    }

    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (A[i] < A[minIndex]) minIndex = i;
        if (A[i] > A[maxIndex]) maxIndex = i;
    }

    int temp = A[minIndex];
    A[minIndex] = A[maxIndex];
    A[maxIndex] = temp;

    cout << "Yeni massiv:\n";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}
