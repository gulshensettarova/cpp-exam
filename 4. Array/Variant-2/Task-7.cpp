#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int n = 7;
    double y[n], x[n];
    double c = 4.9, b = 1.5;

    for (int k = 0; k < n; k++){
       cout << "y[" << k+1 << "] = ";
       cin >> y[k];
    }


    for (int k = 0; k < n; k++) {
        x[k] = log(abs(c*c - b * sin(y[k])));
        c += 0.2;
        b += 0.4;
    }

    for (int k = 0; k < n; k++)
        cout << "x[" << k+1 << "] = " << x[k] << endl;

    return 0;
}
