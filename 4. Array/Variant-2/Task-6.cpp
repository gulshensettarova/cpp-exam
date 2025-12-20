#include <iostream>
using namespace std;

int main() {
    const int n = 8;
    double x[n];
    double b = 2.7, y = 0;

    for (int k = 0; k < n; k++){
        cout<<"x["<<k<<"]=";
        cin >> x[k];
    }
  
    for (int k = 0; k < n; k++) {
        y += b * x[k];
        b += 0.55;
    }

    cout << "y = " << y;
    return 0;
}
