#include <iostream>

using namespace std;

int main()
{
    int a[24][24], i, j, n;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(j=1; j<=n; j++)
    {
        cout << a[1][j] << " "; /// Elementele de pe prima linie.
    }

    for(i=2; i<=n; i++)
    {
        cout << a[i][n] << " "; /// Elementele de pe ultima coloana.
    }

    for(j=n-1; j>=1; j--)
    {
        cout << a[n][j] << " "; /// Elementele de pe ultima linie.
    }

    for(i=n-1; i>=2; i--)
    {
        cout << a[i][1] << " "; /// Elementele de pe prima coloana.
    }

    return 0;
}
