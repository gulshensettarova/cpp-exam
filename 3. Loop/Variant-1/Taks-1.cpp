#include <iostream>
#include <cmath>
using namespace std;
//Variant-1 Sual-1
int main() {
    float x0=1,dx=0.1,xn=2.3,a=5,b=2.1,y=0;
    while(x0<=xn){
        y=exp(a*x0)-exp(b*x0);
        x0+=dx;
        cout<<y<<endl;
    }
    return 0;
}
