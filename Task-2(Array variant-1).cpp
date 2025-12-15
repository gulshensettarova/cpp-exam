#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x0=1,xn=2,dx=0.05,y;
    while(x0<=xn){
        y=sqrt(10*x0)+sin(abs(x0-6.25));
        x0+=dx;
    }
    cout<<"Netice:"<<y;
    return 0;
}
