#include <iostream>
#include <cmath>
using namespace std;
//Variant-1 Sual-5
int main() {
    float x0=1.126,h=0.41,a=71,pi=3.14,y=0;
    int n=12;
    for(int i=0;i<n;i++){
        y=a/(pow(a,2)+1.73)*sqrt(pow(pi,2)-pow(x0,2));
        x0+=h;
        cout<<y<<endl;
    }

    return 0;
}
