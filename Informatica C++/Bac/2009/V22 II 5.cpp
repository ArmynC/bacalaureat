#include <iostream>

using namespace std;

int main()
{
    int a[21][21], m, n, i, j, k;

    cin >> m >> n;

    k = m*n;

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            a[i][j] = k;

            k--;
        }
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
