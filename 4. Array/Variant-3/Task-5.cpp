#include <iostream>
using namespace std;

int main() {
    const int n = 10;
    int A[n];

    for (int i = 0; i < n; i++) {
        cout << "A[" << i+1 << "]=";
        cin >> A[i];
    }

    int minIndex = 0;
    for (int i = 1; i < n; i++)
        if (A[i] < A[minIndex])
            minIndex = i;

    int sum = 0;
    for (int i = 0; i < minIndex; i++)
        sum += A[i];

    cout << "C?m = " << sum;
    return 0;
}
