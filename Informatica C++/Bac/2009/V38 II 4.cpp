#include <iostream>

using namespace std;

int main()
{
    int a[31][31], n, i, j, min, p, nr;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }

    p = 1;
    nr = 0;

    for(i=1; i<=n; i++)
    {
        min = 100;

        for(j=1; j<=n; j++)
        {
            if(min>a[j][n-i+1])
            {
                min = a[j][n-i+1];
            }
        }

        if(min==a[i][n-i+1])
        {
            nr++;

            p = (p*(a[i][n-i+1]%10))%10;
        }
    }

    if(nr==0)
    {
        cout << "NU EXISTA";
    }
    else
    {
        cout << p;
    }

    return 0;
}
