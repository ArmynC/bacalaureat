#include <iostream>
using namespace std;

main(){
    float e1, e2;
    int a, b, c;
    a=5;
    b=2;
    c=3;

    e1=1+b/2+c*a+b;
    e2=-c+b*a+(c*b/a+b+c)/(a*b);

    cout<<"e1="<<e1<<endl;
    cout<<"e2="<<e2;
}
