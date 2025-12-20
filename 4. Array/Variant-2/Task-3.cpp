#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int n = 25;
    double A[n];

    for (int i = 0; i < n; i++) cin >> A[i];

    double min = A[0], max = A[0];

    for (int i = 1; i < n; i++) {
        if (A[i] < min) min = A[i];
        if (A[i] > max) max = A[i];
    }

    cout << "?d?di orta = " << (min + max) / 2 << endl;
    cout << "H?nd?si orta = " << sqrt(min * max);

    return 0;
}
