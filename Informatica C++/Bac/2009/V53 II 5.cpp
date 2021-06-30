#include <iostream>

using namespace std;

int main()
{
    int m, n, x, y, i, j, a[11][21], b[1][21];

    cin >> m >> n >> x >> y;

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(j=1; j<=n; j++)
    {
        b[1][j] = a[x][j];
        a[x][j] = a[y][j];
        a[y][j] = b[1][j];
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