#include <iostream>
#include <math.h>
using namespace std;

main(){
    float x, y, z, A, B, C;

    cout<<"x="; cin>>x;
    cout<<"y="; cin>>y;
    cout<<"z="; cin>>z;

    C=(12*x+1)/(pow(y,2)+2)-sqrt(pow(z,2)+27);
    B=C-3*x+5*y-45*z;
    A=5*x+3*B-21*y+pow(z,4);

    cout<<"A="<<A<<endl;
    cout<<"B="<<B<<endl;
    cout<<"C="<<C<<endl;
}
