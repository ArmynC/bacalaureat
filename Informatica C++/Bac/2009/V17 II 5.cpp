#include <iostream>

using namespace std;

int main()
{
    int a[20][20], i, j, n;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i+j==n+1)
            {
                a[i][j] = n;
            }
            else
            {
                a[i][j] = i+j-1;
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
