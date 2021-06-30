#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, y, nr;

    nr = 0;

    ifstream f("bac.txt");

    f >> x;

    if(x%2==0)
    {
        cout << x << " ";

        nr++;
    }

    while(f>>y)
    {
        if(y!=x && y%2==0)
        {
            cout << y << " ";

            nr++;
        }

        x = y;
    }

    f.close();

    if(nr==0)
    {
        cout << "nu exista";
    }

    return 0;
}
