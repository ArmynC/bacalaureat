#include <iostream>

using namespace std;

int main()
{
    int n, m, i, j, k, a[101][101];

    cin >> n >> m;

    k = 2*n*m-1;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            a[i][j] = k*k;

            k -= 2;
        }
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
