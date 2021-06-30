#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int k, n, x, v[101], m, i, d, nr;

    m = 0;
	
    ifstream f("bac.txt");

    cin >> k;

    f >> n;

    for(i=1; i<=n; i++)
    {
        f >> x;

        nr = 0;

        for(d=1; d<=x; d++)
        {
            if(x%d==0)
            {
                nr++;
            }
        }

        if(nr>=k)
        {
            m++;

            v[m] = x;
        }
    }

    f.close();

    for(i=1; i<=m; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
