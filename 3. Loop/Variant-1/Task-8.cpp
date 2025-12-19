#include <iostream>
#include <cmath>
using namespace std;
//Variant-1 Sual-8
int main() {
    float x0=3.261,h=0.49,y=0,a;
    int n=10;
    cout<<"a=";
    cin>>a;
    for(int i=0;i<n;i++){
        y=log(x0-pow(a,2));
        x0+=h;
        cout<<y<<endl;
    }

    return 0;
}
