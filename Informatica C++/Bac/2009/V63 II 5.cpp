#include <iostream>

using namespace std;

int main()
{
    int n, m, i, j, k, a[25][25];

    k = 1;

    cin >> n >> m;

    for(j=1; j<=m; j++)
    {
        for(i=1; i<=n; i++)
        {
            a[i][j] = k;
            k++;
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
