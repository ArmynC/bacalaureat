#include <iostream>

using namespace std;

int main()
{
    int n, k, i, j, aux, a[22][22];

    cin >> n >> k;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << endl;

    for(j=1; j<=k-1; j++)
    {
        aux = a[j][k];
        a[j][k] = a[k][j];
        a[k][j] = aux;
    }

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
