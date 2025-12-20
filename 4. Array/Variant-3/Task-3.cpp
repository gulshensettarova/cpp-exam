#include <iostream>
using namespace std;

int main() {
    const int n = 10;
    int A[n], B[n], sum = 0;

    for (int i = 0; i < n; i++) {
        cout << "A[" << i+1 << "]=";
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        B[i] = -A[i];
        sum += B[i];
    }

    cout << "B massivinin c?mi = " << sum;
    return 0;
}
