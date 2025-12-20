#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int X[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cout << "X[" << i+1 << "][" << j+1 << "]=";
            cin >> X[i][j];
        }

    cout << "Yuxari ucbucaq:\n";
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            cout << X[i][j] << " ";

    cout << "\nAsagi ucbucaq:\n";
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            cout << X[i][j] << " ";

    return 0;
}
