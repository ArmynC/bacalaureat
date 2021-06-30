#include <iostream>

using namespace std;

int main()
{
    int a[10][10], n, i, j, k;

    cin >> n;

    k = 1;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            a[i][j] = 2*k;

            k++;
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
