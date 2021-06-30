#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, i, a, b, x, minx;

    ifstream f("bac.txt");

    f >> n;

    f >> a >> b;

    minx = 10000;

    for(i=1; i<=n; i++)
    {
        f >> x;

        if(x>=a && x<=b && minx > x)
        {
            minx = x;
        }
    }

    f.close();

    if(minx==10000)
    {
        cout << "NU";
    }
    else
    {
        cout << minx;
    }

    return 0;
}
