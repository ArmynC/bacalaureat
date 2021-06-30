#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    int nr;
    float x;

    nr = 0;

    ifstream f("numere.txt");

    while(f>>x)
    {
        if(floor(x)==x && x>=0)
        {
            nr++;
        }
    }

    f.close();

    if(nr>=10)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}
