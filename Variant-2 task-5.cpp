
#include <iostream>
#include <cmath>

//Massivler (1 olculu variant 2 task-5)
using namespace std;
int main() {
    int n=10;
    float x[n],y[n]={1,2,3,4,5,6,7,8},p=0.3,dx=0.1;
    for(int k=0;k<n;k++){
        x[k]=sqrt(abs(y[k]-p));
        p+=dx;
        cout<<x[k]<<endl;
    }
    return 0;
}
