// Se citesc de la tastatura punctajele obtinute de elevi, sa se afiseze calificativul corespunzator.
// 1-4 Insuficient
// 5-6 Suficient
// 7-8 Bine
// 9-10 Foarte Bine

#include <iostream>
using namespace std;

int main(){
     int p;

     cout << "Defineste nota (P): "; cin >> p;

     switch(p)
     {
         case 1: cout << "Insuficient"; break;
         case 2: cout << "Insuficient"; break;
         case 3: cout << "Insuficient"; break;
         case 4: cout << "Insuficient"; break;
         case 5: cout << "Suficient"; break;
         case 6: cout << "Suficient"; break;
         case 7: cout << "Bine"; break;
         case 8: cout << "Bine"; break;
         case 9: cout << "Foarte bine"; break;
         case 10: cout << "Foarte bine"; break;
         default: cout << "Nu exista calificativ."; break;
    }
}
