#include <iostream>

using namespace std;

int main()
{
    int n, i, j, a[24][24];

    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i<=n-1 && j<=n-1)
            {
                a[i][j] = 1;
            }
            else if(i==n && j==n)
            {
                a[i][j] = n;
            }
            else if(i==n)
            {
                a[i][j] = j;
            }
            else
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
