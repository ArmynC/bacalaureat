#include <iostream>

using namespace std;

int main()
{
    int n, i, j, a[16][16];

    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==n)
            {
                a[i][j] = j;
            }
            else if(i<j)
            {
                a[i][j] = 0;
            }
        }
    }

    for(i=n-1; i>=1; i--)
    {
        for(j=n-1; j>=1; j--)
        {
            if(j>1 && i>=j)
            {
                a[i][j] = a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
            }
            else if(i>=j)
            {
                a[i][j] = a[i+1][j]+a[i+1][j+1];
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
