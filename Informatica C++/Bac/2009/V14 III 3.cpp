#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, nr;

    nr = 0;

    ifstream f("bac.txt");

    while(f>>x)
    {
        if(nr<5)
        {
            cout << x << " ";

            nr++;
        }
        else
        {
            cout << endl;

            nr = 0;

            cout << x << " ";

            nr++;
        }
    }

    f.close();

    return 0;
}
