#include <iostream>

using namespace std;

int main()
{
    int a[40][40], n, i, j;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i+j==n+1)  /// Suntem pe diagonala secundara.
            {
                a[i][j] = 0;
            }
            else if(i+j<n+1)  /// Suntem peste diagonala secundara.
            {
                a[i][j] = 1;
            }
            else if(i+j>n+1)  /// Suntem sub diagonala secundara.
            {
                a[i][j] = 2;
            }
        }
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
