#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int X[n], Y[n];

    for (int i = 0; i < n; i++) cin >> X[i];
    for (int i = 0; i < n; i++) cin >> Y[i];

    cout << "Serti ödeyen x elementleri:\n";
    for (int i = 0; i < n; i++) {
        if (X[i] == Y[i] * Y[i])
            cout << X[i] << " ";
    }

    return 0;
}
