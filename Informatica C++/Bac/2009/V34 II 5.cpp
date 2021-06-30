#include <iostream>

using namespace std;

int main()
{
    int a[21][21], n, i, j, k;

    n = 0;
    k = 2;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(k%3==0)
            {
                k += 2;
            }

            a[i][j] = k;

            k += 2;
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
