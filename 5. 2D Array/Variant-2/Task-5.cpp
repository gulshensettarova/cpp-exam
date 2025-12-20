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

    for (int i = 1; i < n-1; i++)
        for (int j = 1; j < m-1; j++) {
            int v = X[i][j];
            if (v > X[i-1][j] && v > X[i+1][j] &&
                v > X[i][j-1] && v > X[i][j+1]) {
                cout << "X[" << i+1 << "][" << j+1 << "] = " << v << endl;
            }
        }

    return 0;
}
