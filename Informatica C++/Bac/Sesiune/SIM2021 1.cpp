#include <iostream>

using namespace std;

int factori(int n, int m)
{
    int nr, i, j, f, e, fn[30], fm[30], expn[30], expm[30], k1, k2;

    nr = 0;
    k1 = 0;
    k2 = 0;

    f = 2;

    while(f<=n)
    {
        if(n%f!=0)
        {
            f++;
        }
        else
        {
            e = 0;

            while(n%f==0)
            {
                e++;
                n /= f;
            }

            k1++;
            fn[k1] = f;
            expn[k1] = e;
            f++;
        }
    }

    f = 2;

    while(f<=m)
    {
        if(m%f!=0)
        {
            f++;
        }
        else
        {
            e = 0;

            while(m%f==0)
            {
                e++;
                m /= f;
            }

            k2++;
            fm[k2] = f;
            expm[k2] = e;
            f++;
        }
    }

    for(i=1; i<=k1; i++)
    {
        for(j=1; j<=k2; j++)
        {
            if(fn[i]==fm[j] && expn[i]==expm[j])
            {
                nr++;
            }
        }
    }

    return nr;
}

int main()
{
    int n, m;

    cin >> n >> m;

    cout << factori(n,m);

    return 0;
}
