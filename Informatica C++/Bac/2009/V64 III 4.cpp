#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, y, l, lmax;

    ifstream f("date.in");

    f >> x;

    l = 1;
    lmax = 0;

    while(f>>y)
    {
        if(y<x)
        {
            l++;
            x = y;
        }
        else
        {
            if(lmax<l)
            {
                lmax = l;
            }

            x = y;
            l = 1;
        }
    }

    if(lmax<l)
    {
        lmax = l;
    }

    f.close();

    cout << lmax;

    return 0;
}
