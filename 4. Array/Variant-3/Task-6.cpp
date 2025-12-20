#include <iostream>
using namespace std;

int main() {
    const int n = 12;
    int A[n], count = 0, sum = 0;

    for (int i = 0; i < n; i++) {
        cout << "A[" << i+1 << "]=";
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            count++;
            sum += A[i];
        }
    }

    cout << "Menfi elementlerin sayi = " << count << endl;
    cout << "Menfi elementlerin cemi = " << sum;

    return 0;
}
