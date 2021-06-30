#include <iostream>

using namespace std;

int main()
{
    int n, k, i, j, a[25][25];

    cin >> n >> k;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j<=k)
            {
                a[i][j] = 1;
            }
            else
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