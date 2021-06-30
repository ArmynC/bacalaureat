#include <iostream>

using namespace std;

int main()
{
    int a[101][101], m, n, i, j, p[101], maxp, nr0, nr2;

    cin >> m >> n;

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(j=1; j<=n; j++)
    {
        nr0 = 0;

        nr2 = 0;

        for(i=1; i<=m; i++)
        {
            if(a[i][j]==0)
            {
                nr0++;
            }

            if(a[i][j]==2)
            {
                nr2++;
            }
        }

        if(nr0>0)
        {
            p[j] = 0;
        }
        else
        {
            p[j] = nr2;
        }
    }

    maxp = -1;

    for(j=1; j<=n; j++)
    {
        if(maxp<p[j])
        {
            maxp = p[j];
        }
    }

    for(j=1; j<=n; j++)
    {
        if(p[j]==maxp)
        {
            cout << j << " ";
        }
    }

    return 0;
}
