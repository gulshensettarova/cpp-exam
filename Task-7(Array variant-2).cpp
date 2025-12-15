#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float b=1.5, c=4.9, dx=0.2, dy=0.4;
    int k=7;
    float y[]={1,2,3,4,5,6,7},x[7];
     for(int i=0;i<k;i++){
      x[i]=log(abs(pow(c,2)-b*sin(abs(y[i]))));
        cout<<"x["<<i<<"]="<<x[i]<<endl;
     }
   
    return 0;
}
