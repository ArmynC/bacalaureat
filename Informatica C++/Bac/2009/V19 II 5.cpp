#include <iostream>

using namespace std;

int main()
{
    int a[20][20], n, i, j;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j%2==0) /// Coloana para.
            {
                a[i][j] = i;
            }
            else /// Coloana impara.
            {
                a[i][j] = i+j;
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
