#include <iostream>

using namespace std;

int main()
{
    int a[50][50], i, j, n;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==j)
            {
                a[i][j] = 2; /// Suntem pe diagonala principala.
            }
            else if(i<j)
            {
                a[i][j] = 1; /// Suntem peste diagonala principala.
            }
            else if(i>j)
            {
                a[i][j] = 3; /// Suntem sub diagonala principala.
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
