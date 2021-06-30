#include <iostream>

using namespace std;

int main()
{
    int n, i, j, a[25][25];

    cin >> n;

    for(j=1; j<=n; j++)
    {
        for(i=1; i<=n; i++)
        {
            a[i][j] = n+1-j;
        }
    }

    for(i=1; i<=n; i++)
    {
        a[i][i] = 0;
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
