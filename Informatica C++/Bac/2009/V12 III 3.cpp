#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int m, n, v[101], u[101], nr, i, j;

    nr = 0;

    ifstream f("bac.txt");

    f >> m >> n;

    for(i=1; i<=m; i++)
    {
        f >> v[i];
    }

    for(j=1; j<=n; j++)
    {
        f >> u[j];
    }

    f.close();

    i = 1;
    j = 1;

    while(i<=m && j<=n)
    {
        if(v[i]<u[j])
        {
            i++;
        }
        else if(v[i]==u[j])
        {
            i++;

            j++;
        }
        else if(v[i]>u[j])
        {
            j++;

            nr++;
        }
    }

    if(j<=n)
    {
        while(j<=n)
        {
            j++;

            nr++;
        }
    }

    cout << nr;

    return 0;
}
