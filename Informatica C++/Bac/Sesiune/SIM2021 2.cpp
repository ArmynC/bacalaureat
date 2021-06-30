#include <iostream>

using namespace std;

int main()
{
    int a[21][21], n, i, j, k;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i+j==n+1)
            {
                a[i][j] = n;
            }
        }
    }

    for(k=1; k<=n-1; k++)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(i+j==n+1-k)
                {
                    a[i][j] = n-k;
                }
            }
        }
    }

    for(k=1; k<=n-1; k++)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(i+j==n+1+k)
                {
                    a[i][j] = n-k;
                }
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
