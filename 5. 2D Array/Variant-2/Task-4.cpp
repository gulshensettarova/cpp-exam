#include <iostream>
using namespace std;

int main() {
    int k, l;
    cin >> k >> l;
    int M[k][l];

    for (int i = 0; i < k; i++)
        for (int j = 0; j < l; j++) {
            cout << "M[" << i+1 << "][" << j+1 << "]=";
            cin >> M[i][j];
        }

    for (int i = 0; i < k; i++) {
        bool increasing = true;
        for (int j = 0; j < l-1; j++)
            if (M[i][j] > M[i][j+1]) {
                increasing = false;
                cout << "Pozulma: M[" << i+1 << "][" << j+2 << "] = " << M[i][j+1] << endl;
                break;
            }

        if (increasing) {
            cout << "Artan setir " << i+1 << ": ";
            for (int j = 0; j < l; j++) cout << M[i][j] << " ";
            cout << endl;
        }
    }

    return 0;
}
