#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, i, x, y, maxx, miny;

    maxx = -101;
    miny = 101;

    ifstream f("numere.txt");

    f >> n;

    for(i=1; i<=n; i++)
    {
        f >> x >> y;

        if(maxx<x)
        {
            maxx = x;
        }

        if(miny>y)
        {
            miny = y;
        }
    }

    f.close();

    if(maxx>miny)
    {
        cout << "0";
    }
    else
    {
        cout << maxx << " " << miny;
    }

    return 0;
}
