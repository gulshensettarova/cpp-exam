#include <iostream>
#include <cmath>
using namespace std;
//Variant-1 Sual-6
int main() {
    float x0=1.126,h=0.44,y=0;
    int n=8;
    for(int i=0;i<n;i++){
        y=exp(x0)-exp(-x0)/2;
        x0+=h;
        cout<<y<<endl;
    }

    return 0;
}
