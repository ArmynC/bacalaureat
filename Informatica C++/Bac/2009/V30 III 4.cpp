#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, i, k;
    double x, y;

    k = 0;

    ifstream f("numere.in");

    f >> n;
    f >> x;

    k++;

    for(i=1; i<n; i++)
    {
        f >> y;

        if(y>x)
        {
            k++;
        }

        x = y;
    }

    f.close();

    cout << k;

    return 0;
}
