#include <iostream>

using namespace std;

int main()
{
    int a[11][11], i, j, n, m;

    cin >> n >> m;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(i>j)
            {
                a[i][j] = i;
            }
            else
            {
                a[i][j] = j;
            }
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
