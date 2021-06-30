#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, y, nr;

    nr = 0;

    ifstream f("bac.txt");

    f >> x;

    while(f>>y)
    {
        if(y>=x)
        {
            nr++;
        }
    }

    f.close();

    cout << nr+1;

    return 0;
}
