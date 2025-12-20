#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n=10;
    double p = 0.3,dx=0.1;
    double y[n],x[n];

    for (int k = 1; k <= 10; k++) {
        cout<<"y["<<k<<"]=";
        cin >> y[k];
        x[k] = sqrt(abs(y[k] - p));
        p += dx;
        cout << "x[" << k << "]= " << x[k] << endl;
    }

    return 0;
}
