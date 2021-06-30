#include <iostream>

using namespace std;

int main()
{
    int a[11][11], i, j, m, n, k;

    cin >> m >> n;

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(i=1; i<=m; i=i+2)
    {
        /// Algoritm de stergere a liniei i din matricea a.
        for(k=i; k<=m-1; k++)
        {
            for(j=1; j<=n; j++)
            {
                a[k][j] = a[k+1][j];
            }
        }

        m--;
        i--;
    }

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
