#include <iostream>
#include <cmath>
using namespace std;
//task-1 x0=1.126 h=0.41 n=12 a=71
int main() {
    float x0=1.126,h=0.41,y=0,pi=3.14;
    int a=71,n=12;
    for(int i=0;i<n;i++){
        y=a/(pow(a,2)+1.73)*sqrt(pow(pi,2)-pow(x0,2));
         cout<<"Netice:"<<y<<endl;
         cout<<x0<<endl;
        x0+=h;
    }
    cout<<"Netice:"<<y;
    return 0;
}
