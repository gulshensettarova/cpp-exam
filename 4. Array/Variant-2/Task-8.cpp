#include <iostream>
using namespace std;

int main() {
    const int n = 6;
    double x[n], y[n];
    double a = 3.5, b = 5.1, c = 0;

    for (int k = 0; k < n; k++){
        cout << "x[" << k+1 << "] = ";
        cin >> x[k];
        cout << "y[" << k+1 << "] = ";
        cin >> y[k];
    }
   

    for (int k = 0; k < n; k++) {
        c += a * b * x[k] * y[k];
        a += 0.45;
        b += 0.375;
    }

    cout << "c = " << c;
    return 0;
}
