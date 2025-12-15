#include <iostream>
using namespace std;

//Task-6 (massivler)
int main() {
    float b=2.7,dx=0.55,y=0;
    int k=8;
    float x[]={1,2,3,4,5,6,7,8};
     for(int i=0;i<k;i++){
         y+=b*x[i];
         b+=dx;
     }
     cout<<"netice:"<<y;
    return 0;
}
