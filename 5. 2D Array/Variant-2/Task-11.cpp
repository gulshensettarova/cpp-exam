#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int X[n][m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            cout << "X[" << i+1 << "][" << j+1 << "]=";
            cin >> X[i][j];
        }

    cout << "Pillevari cap:\n";
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++)
                cout << X[i][j] << " ";
        } else {
            for (int j = m - 1; j >= 0; j--)
                cout << X[i][j] << " ";
        }
    }

    return 0;
}
