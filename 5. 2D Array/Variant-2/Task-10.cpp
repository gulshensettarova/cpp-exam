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

    for (int i = 0; i < n && !found; i++)
        for (int j = 0; j < m-2; j++) {
            if (X[i][j] <= X[i][j+1] && X[i][j+1] <= X[i][j+2]) {
                cout << "Ardici elementler: "
                     << X[i][j] << " "
                     << X[i][j+1] << " "
                     << X[i][j+2] << endl;
                found = true;
                break;
            }
        }

    if (!found)
        cout << "Uygun ardici tapilmadi";

    return 0;
}
