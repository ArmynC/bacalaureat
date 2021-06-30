#include <iostream>

using namespace std;

int main()
{
    int m, n, i, j, a[11][11], min;

    cin >> m >> n;

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(i=1; i<=m; i++)
    {
        min = 10000;

        for(j=1; j<=n; j++)
        {
            if(min>a[i][j])
            {
                min = a[i][j];
            }
        }

        cout << min << " ";
    }

    return 0;
}
