#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x[10001], i, n, k, j, s, maxim, poz;

    ifstream f("bac.txt");

    f >> n >> k;

    for(i=1; i<=n; i++)
    {
        f >> x[i];
    }

    f.close();

    maxim = -1;

    for(i=1; i<=n-k+1; i++)
    {
        s = 0;

        for(j=i; j<=i+k-1; j++)
        {
            s = s+x[j];
        }

        if(maxim<s)
        {
            maxim = s;

            poz = i;
        }
    }

    cout << poz;

    return 0;
}
