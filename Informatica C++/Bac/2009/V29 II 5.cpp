#include <iostream>

using namespace std;

int main()
{
    int a[7][7], i, j, x, p, n, ok;

    p = 1;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }

    j = 2;

    while(j<=n)
    {
        if(a[1][j]%a[1][1]!=0)
        {
            j++;
        }
        else
        {
            ok = 1;

            x = a[1][j]/a[1][1];

            for(i=2; ok==1 && i<=n; i++)
            {
                if(a[i][j]%a[i][1]!=0 || (a[i][j]%a[i][1]==0 && a[i][j]/a[i][1]!=x))
                {
                    ok = 0;
                }
            }

            if(ok==1)
            {
                p *= x;

                j++;
            }
            else
            {
                j++;
            }
        }
    }

    cout << p;

    return 0;
}
