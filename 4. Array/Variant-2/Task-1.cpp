#include <iostream>
#include <cmath>
using namespace std;
//Array Variant -2 sual-1
int main() {
    const int n = 25;
    double A[n], c, sum = 0;
    int count = 0;

    cout << "c daxil et: ";
    cin >> c;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
        if (abs(A[i]) < c) {
            sum += A[i];
            count++;
        }
    }

    if (count > 0)
        cout << "Ededi orta = " << sum / count;
    else
        cout << "Uygun element yoxdur";

    return 0;
}
