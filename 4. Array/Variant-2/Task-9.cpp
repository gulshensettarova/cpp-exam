#include <iostream>
using namespace std;

int main() {
    const int n = 8;
    double x[n];
    double c = 0.5, b = 1.0;

    for (int k = 0; k < n; k++) {
        x[k] = c + b * b;
        c += 0.5;
        b += 0.2;
    }

    for (int k = 0; k < n; k++)
        cout << "x[" << k+1 << "] = " << x[k] << endl;

    return 0;
}
