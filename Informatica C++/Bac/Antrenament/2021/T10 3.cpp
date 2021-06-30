#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, y, nr;

    ifstream f("bac.txt");

    nr = 0;

    f >> x;

    while(f>>y)
    {
        if(y<x)
        {
            nr++;
        }
    }

    f.close();

    cout << nr+1;

    return 0;
}
