#include <iostream>

using namespace std;

int main()
{
    int m, n, i, j, a[21][21], nr, ok;

    nr = 0;

    cin >> m >> n;

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }

    i = 1;

    while(i<=m)
    {
        ok = 0;
        j = 1;

        while(j<=m && ok==0)
        {
            if(a[i][1]==a[j][n] && a[i][1]!=0)
            {
                ok = 1;

                cout << a[i][1] << " ";

                nr ++;
            }
            else
            {
                j++;
            }
        }

        i++;
    }

    if(nr==0)
    {
        cout << "nu exista";
    }

    return 0;
}
