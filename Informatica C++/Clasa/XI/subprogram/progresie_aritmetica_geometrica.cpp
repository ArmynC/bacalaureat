// Sa se calculeze media aritemtica si geometrica a doua numere intregi a si b.

#include <iostream>
#include <math.h>
using namespace std;

void medie(int a, int b, float &ma, float &mg){
    ma=(a+b)/2;
    mg=sqrt(a*b);
}

main(){
    int x, y;
    float ma, mg;

    cout << "X: "; cin >> x;
    cout << "Y: "; cin >> y;

    medie(x,y,ma,mg);

    cout << "Media aritmetica: " << ma;
    cout << endl << "Media geometrica: " << mg;
}
