#include <iostream>

using namespace std;

int main()
{
    int n, i, j, a[10][10], p;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(j=1; j<=n; j++)
    {
        p = 1;

        for(i=1; i<=n; i++)
        {
            p *= a[i][j];
        }

        cout << p << " ";
    }

    return 0;
}
