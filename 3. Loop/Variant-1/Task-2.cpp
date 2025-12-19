#include <iostream>
#include <cmath>
using namespace std;
//Variant-1 Sual-2
int main() {
    float x0=1,dx=0.05,xn=2,y=0;
    while(x0<=xn){
        y=sqrt(10*x0)+sin(abs(x0-6.25));
        x0+=dx;
        cout<<y<<endl;
    }
    return 0;
}
