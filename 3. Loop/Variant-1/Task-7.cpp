#include <iostream>
#include <cmath>
using namespace std;
//Variant-1 Sual-7
int main() {
    float x0=2.21,h=0.57,y=0;
    int n=14;
    for(int i=0;i<n;i++){
        y = sin(pow(x0, 2)) + pow(1 / tan(x0), 2);
        x0+=h;
        cout<<y<<endl;
    }

    return 0;
}
