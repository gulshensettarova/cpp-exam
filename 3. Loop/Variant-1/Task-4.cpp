#include <iostream>
#include <cmath>
using namespace std;
//Variant-1 Sual-4
int main() {
    float x0=1,dx=0.43,xn=3,u=0;
    while(x0<=xn){
        u=exp(x0)-5.6*log10(x0);
        x0+=dx;
        cout<<u<<endl;
    }
    return 0;
}
