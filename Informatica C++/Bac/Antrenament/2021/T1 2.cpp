#include <iostream>

using namespace std;

int main()
{
    int n, i, j, a[101][101];

    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(i=1; i<=n; i++)
    {
        cout << a[i][1] << " ";
    }

    for(j=2; j<=n; j++)
    {
        cout << a[n][j] << " ";
    }

    for(i=n-1; i>=1; i--)
    {
        cout << a[i][n] << " ";
    }

    for(j=n-1; j>=2; j--)
    {
        cout << a[1][j] << " ";
    }

    return 0;
}
