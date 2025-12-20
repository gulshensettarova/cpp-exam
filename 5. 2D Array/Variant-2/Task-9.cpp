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

    bool found = false;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            int v = X[i][j];
            bool minRow = true, maxCol = true;

            for (int k = 0; k < m; k++)
                if (X[i][k] < v) minRow = false;

            for (int k = 0; k < n; k++)
                if (X[k][j] > v) maxCol = false;

            if (minRow && maxCol) {
                cout << "Yeher noqte: X[" << i+1 << "][" << j+1 << "]=" << v << endl;
                found = true;
            }
        }

    if (!found)
        cout << "Yeher noqte yoxdur";

    return 0;
}
