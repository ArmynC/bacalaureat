#include <iostream>

using namespace std;

int main()
{
    int a[101][101], m, n, i, j, cifra;

    cin >> m >> n;

    /// Completam linia 1:
    for(j=1; j<=n; j++)
    {
        a[1][j] = j;
    }

    /// Completam coloana 1:
    for(i=1; i<=m; i++)
    {
        a[i][1] = i;
    }

    /// Completam restul matricei:
    for(i=2; i<=m; i++)
    {
        for(j=2; j<=n; j++)
        {
            a[i][j] = a[i-1][j] + a[i][j-1];
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

    cifra = a[m][n]%10;

    cout << cifra;

    return 0;
}
