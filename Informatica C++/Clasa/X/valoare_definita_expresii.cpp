/* Se citesc N, A, B, C. Sa se calculeze valoarea expresiei:
  [ (a+b)/c, pentru n=1
e=| (b+c)/a, pentru n=2
  [ (c+a)/b, pentru n=3
*/

#include <iostream>
using namespace std;

int main(){
     int n, a, b, c;
     float e;

     cout << "Defineste A: "; cin >> a;
     cout << "Defineste B: "; cin >> b;
     cout << "Defineste C: "; cin >> c;
     cout << "Defineste N: "; cin >> n;

     switch(n)
     {
         case 1: e=(a+b)/c; break;
         case 2: e=(b+c)/a; break;
         case 3: e=(c+a)/b; break;
         default: "Expresie inexistenta"; break;
     }
     cout << "Valoarea expresiei este: " << e;
}
