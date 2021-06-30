#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, y, z, t, nr;

    ifstream f("numere.txt");

    nr = 0;

    f >> x >> y >> z;

    while(f>>t)
    {
        if(x<y && y<z && z<t)
        {
            if(nr==0)
            {
                cout << x << " " << y << " " << z << " " << t;

                nr++;
            }
        }

        x = y;

        y = z;

        z = t;
    }

    f.close();

    if(nr==0)
    {
        cout << "NU EXISTA";
    }

    return 0;
}
