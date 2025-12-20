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

    int minSum = X[0][0] + X[0][1];
    int r = 0, c = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m - 1; j++) {
            int s = X[i][j] + X[i][j+1];
            if (s < minSum) {
                minSum = s;
                r = i;
                c = j;
            }
        }

    cout << "Minimum c?mli ardicil elementl?r:\n";
    cout << "X[" << r+1 << "][" << c+1 << "] = " << X[r][c] << endl;
    cout << "X[" << r+1 << "][" << c+2 << "] = " << X[r][c+1];

    return 0;
}
