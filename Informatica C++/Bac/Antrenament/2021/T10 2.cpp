#include <iostream>

using namespace std;

int main()
{
    int a[21][21], m, n, i, j, nr, ok, v[21];

    cin >> m >> n;

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }

    nr = 0;

    for(j=1; j<=n-1; j++)
    {
        ok = 0;

        for(i=2; i<=m && ok==0; i++)
        {
            if(a[1][j]==a[i][n])
            {
                ok = 1;
            }
        }

        if(ok==1)
        {
            nr++;

            v[nr] = a[1][j];
        }
    }

    if(nr==0)
    {
        cout << "NU EXISTA";
    }
    else
    {
        for(i=1; i<=nr; i++)
        {
            cout << v[i] << " ";
        }
    }

    return 0;
}
