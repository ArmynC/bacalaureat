#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, i, v[10001], x, y, nr, k;

    nr = 0;

    ifstream f("bac.txt");

    f >> n;

    for(i=1; i<=n; i++)
    {
        f>> v[i];
    }

    while(f>>x>>y)
    {
        k = 0;

        for(i=1; i<=n; i++)
        {
            if(v[i]>=x && v[i]<=y)
            {
                k++;
            }
        }

        if(k==0)
        {
            nr++;
        }
    }

    f.close();

    cout << nr;

    return 0;
}
