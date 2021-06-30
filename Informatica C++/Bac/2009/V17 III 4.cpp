#include <iostream>
#include <fstream>
#include <iomanip> /// Atunci cand vrem sa folosim functiile setprecision sau setw.

using namespace std;

int main()
{
    int x, s, nr;
    double ma, ss;

    s = 0;
    nr = 0;

    ifstream f("numere.txt");

    while(f>>x)
    {
        if(x>0)
        {
            s += x;

            nr++;
        }
    }

    f.close();

    ss = s;

    if(nr==0)
    {
        cout << "NU EXISTA";
    }
    else
    {
        ma = ss/nr;

        cout << fixed << setprecision(3) << ma;
    }

    return 0;
}
