#include <iostream>

using namespace std;

int main()
{
    int m, n, i, j, a[101][101], max;

    cin >> m >> n;

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(i=1; i<=m; i++)
    {
        max = -1;

        for(j=1; j<=n; j++)
        {
            if(a[i][j]<21 && a[i][j]>max)
            {
                max = a[i][j];
            }
        }

        if(max!=-1)
        {
            cout << max << endl;
        }
        else
        {
            cout << "nu exista" << endl;
        }
    }

    return 0;
}