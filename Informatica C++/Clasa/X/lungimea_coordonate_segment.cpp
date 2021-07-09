// Citesc coordonatele A(x1,y1), B(x2,y2).
// Afiseaza lungimea AB si coordonatele mijlocului segmentului AB.

#include <iostream>
#include <math.h>
using namespace std;

int main(){

    float x1, y1, x2, y2, ab, c1, c2;

    cout << "Introdu coordonata punctului A - x1: "; cin >> x1;
    cout << "Introdu coordonata punctului A - y1: "; cin >> y1;
    cout << "Introdu coordonata punctului B - x2: "; cin >> x2;
    cout << "Introdu coordonata punctului B - y2: "; cin >> y2;

    ab=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    c1=(x1+x2)/2;
    c2=(y1+y2)/2;

    cout << "Lungimea segmentului AB: " << ab << endl;
    cout << "Coordonatele mijlocului segmentului: " << "A(" << x1+c1 << ")" << " , " << "B(" << y1+c2 << ")" << endl;

}
