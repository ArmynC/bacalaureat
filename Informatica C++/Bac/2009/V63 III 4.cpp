#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, y, z, nr;

    nr = 0;

    ifstream f("date.in");

    f >> x >> y;

    while(f>>z)
    {
        if(y<x+z)
        {
            nr++;
        }

        x = y;
        y = z;
    }

    cout << nr;

    return 0;
}
