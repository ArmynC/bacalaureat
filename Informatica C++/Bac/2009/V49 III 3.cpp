#include <iostream>

using namespace std;

int main()
{
    int n, i, v[51], a, k, ok, minim, j, nr;

    cin >> n;

    minim = 10000;

    for(i=1; i<=n; i++)
    {
        cin >> v[i];

        if(minim>v[i])
        {
            minim = v[i];
        }
    }

    a = minim;
    i = 1;
    ok = 1;

    while(ok==1 && i<=n)
    {
        k = (i*(i-1))/2;

        /// Vom verifica daca a+k se gaseste in vectorul v o singura data.
        nr = 0;

        for(j=1; j<=n; j++)
        {
            if(a+k==v[j])
            {
                nr++;
            }
        }

        if(nr!=1)
        {
            ok = 0;
        }
        else
        {
            i++;
        }
    }

    if(ok==1)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}
