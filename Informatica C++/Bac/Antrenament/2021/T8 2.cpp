#include <iostream>

using namespace std;

int main()
{
    int a[51][51], i, j, n, s;

    s = 0;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i<j && i+j>n+1 && j<n)
            {
                s = s+a[i][j];
            }
        }
    }

    cout << s;

    return 0;
}
