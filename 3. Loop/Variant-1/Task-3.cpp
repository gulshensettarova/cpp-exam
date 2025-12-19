#include <iostream>
#include <cmath>
using namespace std;
//Variant-1 Sual-3
int main() {
    float x0=1,dx=5,xn=41,a=3,t=sqrt(7),z=0;
    while(x0<=xn){
        z=cos(x0)+2*a*tan(t);
        x0+=dx;
        cout<<z<<endl;
    }
    return 0;
}
