#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, i, x, y, nr, k;

    nr = 0;
    k = 0;

    ifstream f("numere.txt");

    f >> n >> x;

    nr = x;

    for(i=2; i<=n; i++)
    {
        f >> y;

        if(y>=nr)
        {
            if(y==nr)
            {
                k++;
            }
            else
            {
                nr = y;

                k = 1;
            }
        }
    }

    f.close();

    cout << nr << " " << k;

    return 0;
}
