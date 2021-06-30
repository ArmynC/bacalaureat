#include <iostream>

using namespace std;

int main()
{
    int n, x, i, j, a[11][11];

    cin >> n >> x;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i%2!=0)
            {
                a[i][j] = x/10;
            }
            else
            {
                a[i][j] = x%10;
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