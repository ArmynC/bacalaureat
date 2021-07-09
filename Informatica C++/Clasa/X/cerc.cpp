// Se citeste de la tastatura raza unui cerc.
// Sa se calculeze si sa se afiseze aria si lungimea cercului.

#include <iostream>
using namespace std;

main()
{
    const float pi = 3.14;

    float r, a, l;

    cout << "Dati raza cercului r="; cin >> r;

    a=pi*r*r;
    l=2*pi*r;

    cout << "Aria cercului este:" << a << "\n";
    cout << "Lungimea cercului este:" << l;

}

