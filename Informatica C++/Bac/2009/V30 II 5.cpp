#include <iostream>

using namespace std;

int main()
{
    int n, k, i, j, a[16][16];

    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==1 || j==1)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = a[i][j-1] + a[i-1][j];
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
