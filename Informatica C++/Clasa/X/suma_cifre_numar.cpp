// Sa se determine suma cifrelor unui numar.
// nr
// 246 | 10
// ... \24
// ==6
// ^rest
//
// c= nr mod(%) 10
#include <iostream>
using namespace std;

int main(){
    int nr, c, s=0;
    cout << "Dati numarul:"; cin >> nr;
    while(nr!=0){
        c=nr%10;
        s=s+c;
        nr=nr/10;
    }
    cout << "Suma cifrelor este:" << s;
}
