#include <iostream>

using namespace std;

int fr[21];

int main()
{
    int n, m, i, j, a[21][21], x, k;

    k = 0;

    cin >> m >> n;

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(i=1; i<=m; i++)
    {
        x = a[i][1];
        fr[x]++;
    }

    for(i=1; i<=m; i++)
    {
        x = a[i][n];
        fr[x]++;
    }

    for(x=1; x<=20; x++)
    {
        if(fr[x]>1)
        {
            cout << x << " ";
            k++;
        }
    }

    if(k==0)
    {
        cout << "nepolarizate";
    }

    return 0;
}
