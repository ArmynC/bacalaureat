#include <iostream>

using namespace std;

int main()
{
    int a[20][20], n, i, j;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i%2==0)  /// Linie para.
            {
                a[i][j] = j;
            }
            else /// Linie impara.
            {
                a[i][j] = i;
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
