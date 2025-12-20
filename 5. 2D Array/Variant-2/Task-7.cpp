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

    cout << "Uygun elementl?r:\n";
    for (int i = 0; i < k; i++)
        for (int j = 0; j < l; j++)
            if ((i+1) % 2 == 1 && (j+1) % 2 == 0)
                cout << "M[" << i+1 << "][" << j+1 << "]=" << M[i][j] << endl;

    return 0;
}
