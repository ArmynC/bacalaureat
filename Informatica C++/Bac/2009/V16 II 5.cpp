#include <iostream>

using namespace std;

int main()
{
    int a[16][16], n, i, j;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i+j==n+1) /// Suntem pe diagonala secundara.
            {
                a[i][j] = 4;
            }
            else if(i==j)  /// Suntem pe diagonala principala.
            {
                a[i][j] = 4;
            }
            else
            {
                a[i][j] = 3;
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
