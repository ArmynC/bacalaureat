#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, y, nr;

    nr = 0;

    ifstream f("bac.in");

    while(f>>x)
    {
        if(x%2!=0)
        {
            y = x;

            nr++;
        }
    }

    if(nr==0)
    {
        cout << "Nu exista numere impare";
    }
    else
    {
        cout << y;
    }

    return 0;
}
