#include <iostream>

using namespace std;

int main()
{
    int a[11][8], m, n, i, j, s, s1, s2, s3, s4;

    m = 10;
    n = 7;

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }

    s1 = 0;
    s2 = 0;
    s3 = 0;
    s4 = 0;

    for(j=1; j<=n; j++)
    {
        s1 += a[1][j];
    }

    for(i=2; i<=m; i++)
    {
        s2 += a[i][n];
    }

    for(j=n-1; j>=1; j--)
    {
        s3 += a[m][j];
    }

    for(i=m-1; i>=2; i--)
    {
        s4 += a[i][1];
    }

    s = s1+s2+s3+s4;

    cout << s;
    cout << endl;

    return 0;
}
