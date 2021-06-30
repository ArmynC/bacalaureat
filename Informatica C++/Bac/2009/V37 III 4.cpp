#include <iostream>
#include <fstream>

using namespace std;

int nrdiv(int x)
{
    int d, nr;

    d = 2;
    nr = 0;

    while(d<=x)
    {
        if(x%d!=0)
        {
            d++;
        }
        else
        {
            nr++;

            while(x%d==0)
            {
                x /= d;
            }

            d++;
        }
    }

    return nr;
}

int main()
{
    int n, i, v[1001];

    ifstream f("bac.in");

    f >> n;

    for(i=1; i<=n; i++)
    {
        f >> v[i];

        cout << nrdiv(v[i]) << " ";
    }

    f.close();

    return 0;
}
