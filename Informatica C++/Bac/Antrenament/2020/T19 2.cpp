#include <iostream>

using namespace std;

int main()
{
    int n, m, k, a[21][21], i, j, ok, logic;

    cin >> m >> n >> k;

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }

    ok = 0;
    i = 1;

    while(i<=m && ok==0)
    {
        if(i!=k)
        {
            logic = 1;

            for(j=1; j<=n && logic==1; j++)
            {
                if(a[i][j]+a[k][j]!=1)
                {
                    logic = 0;
                }
            }

            if(logic==1)
            {
                ok = 1;
            }
            else
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }

    if(ok==1)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}
