/* Se dau coordonatele a 3 puncte din plan:

Sa se precizeze:
a) Cadranul in care se afla fiecare planul
b) Laturile triunghiului fromat de cele 3 puncte
c) Aria triunghiului */

#include <iostream>
#include <math.h>
using namespace std;

struct punct
{
    float x, y;
};

main(){
    float AB, AC, BC, p, a;
    punct A, B, C;

    cout << "Dati coordonatele punctului A" << endl;
    cout << "-----------------------------" << endl;
    cout << "Abscisa punctului A este: "; cin >> A.x;
    cout << "Ordonata punctului A este: "; cin >> A.y;
    cout << endl << endl;

    cout << "Dati coordonatele punctului B" << endl;
    cout << "-----------------------------" << endl;
    cout << "Abscisa punctului B este: "; cin >> B.x;
    cout << "Ordonata punctului B este: "; cin >> B.y;
    cout << endl << endl;

    cout << "Dati coordonatele punctului C" << endl;
    cout << "-----------------------------" << endl;
    cout << "Abscisa punctului C este: "; cin >> C.x;
    cout << "Ordonata punctului C este: "; cin >> C.y;
    cout << endl << endl;

    if((A.x>0) && (A.y>0))
        cout << "Punctul A se afla in cadranul I" << endl;
    if((A.x<0) && (A.y>0))
        cout << "Punctul A se afla in cadranul II" << endl;
    if((A.x<0) && (A.y<0))
        cout << "Punctul A se afla in cadranul III" << endl;
    if((A.x>0) && (A.y<0))
        cout << "Punctul A se afla in cadranul IV" << endl;

    if((B.x>0) && (B.y>0))
        cout << "Punctul B se afla in cadranul I" << endl;
    if((B.x<0) && (B.y>0))
        cout << "Punctul B se afla in cadranul II" << endl;
    if((B.x<0) && (B.y<0))
        cout << "Punctul B se afla in cadranul III" << endl;
    if((B.x>0) && (B.y<0))
        cout << "Punctul B se afla in cadranul IV" << endl;

    if((C.x>0) && (C.y>0))
        cout << "Punctul C se afla in cadranul I" << endl;
    if((C.x<0) && (C.y>0))
        cout << "Punctul C se afla in cadranul II" << endl;
    if((C.x<0) && (C.y<0))
        cout << "Punctul C se afla in cadranul III" << endl;
    if((C.x>0) && (C.y<0))
        cout << "Punctul C se afla in cadranul IV" << endl;

    cout << endl << endl;

    AB = sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
    AC = sqrt(pow(A.x-C.x,2)+pow(A.y-C.y,2));
    BC = sqrt(pow(B.x-C.x,2)+pow(B.y-C.y,2));

    cout << "Distanta dintre punctele A si B este: " << AB << endl;
    cout << "Distanta dintre punctele A si C este: " << AC << endl;
    cout << "Distanta dintre punctele B si C este: " << BC << endl;

    p = (AB+AC+BC)/2;
    a = sqrt(p*(p-AB)*(p-BC)*(p-AC));

    cout << endl << "Aria triunghiului format de cele 3 puncte: " << a;
}
