#include <iostream>

using namespace std;

int main()
{
    int n, k, i, j, a[21][21], aux;

    cin >> n >> k;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << endl;

    aux = a[k][n-k];

    for(j=n-k; j>=2; j--)
    {
        a[k][j] = a[k][j-1];
    }

    a[k][j] = aux;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
