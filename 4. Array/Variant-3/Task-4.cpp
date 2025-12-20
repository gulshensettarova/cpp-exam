#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++) {
        cout << "A[" << i+1 << "]=";
        cin >> A[i];
    }

    int maxIndex = 0;
    for (int i = 1; i < n; i++){
        if (A[i] > A[maxIndex]){
            maxIndex = i;}
}
    int sum = 0;
    for (int i = maxIndex + 1; i < n; i++){
      sum += A[i];
    }

    cout << "C?m = " << sum;
    return 0;
}
