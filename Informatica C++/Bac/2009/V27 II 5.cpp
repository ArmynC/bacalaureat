#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a[11][11], n, i, j;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==1 || j==n || j==1) /// Prima linie sau prima coloana ori ultima coloana.
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = a[i-1][j-1] + a[i-1][j] + a[i-1][j+1];
            }
        }
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout << setw(3) << a[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
