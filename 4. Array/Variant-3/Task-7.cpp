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

    int index = -1;
    for (int i = 0; i < n; i++) {
        if (A[i] > 0) {
            index = i;
            break;
        }
    }

    int sum = 0, count = 0;
    for (int i = index + 1; i < n; i++) {
        sum += A[i];
        count++;
    }

    if (count > 0)
        cout << "Ededi orta = " << (double)sum / count;
    else
        cout << "Hesablamaq mumkun deyil";

    return 0;
}
