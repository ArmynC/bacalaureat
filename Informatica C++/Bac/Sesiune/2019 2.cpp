#include <iostream>

using namespace std;

int main()
{
    int m, n, i, j, a[22][22], ok;

    cin >> m >> n;

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }

    ok = 1;

    for(j=1; j<=n/2 && ok==1; j++)
    {
        for(i=1; i<=m && ok==1; i++)
        {
            if(a[i][j]!=a[i][n-j+1])
            {
                ok = 0;
            }
        }
    }

    if(ok==1)
    {
        cout << "da";
    }
    else
    {
        cout << "nu";
    }

    return 0;
}
