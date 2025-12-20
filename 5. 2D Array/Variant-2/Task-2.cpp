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

    int maxRowSum = 0, row = 0;
    for (int i = 0; i < k; i++) {
        int s = 0;
        for (int j = 0; j < l; j++) s += M[i][j];
        if (s > maxRowSum) {
            maxRowSum = s;
            row = i;
        }
    }

    int maxColSum = 0, col = 0;
    for (int j = 0; j < l; j++) {
        int s = 0;
        for (int i = 0; i < k; i++) s += M[i][j];
        if (s > maxColSum) {
            maxColSum = s;
            col = j;
        }
    }

    cout << "Maksimum c?mli s?tir: " << row+1 << endl;
    cout << "Maksimum c?mli sütun: " << col+1;

    return 0;
}
