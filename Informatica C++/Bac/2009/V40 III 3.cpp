#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, x, i, v[1001], u[1001], m, p, ok;

    ifstream f("bac.in");

    f >> n;

    m = 0;
    p = 0;

    for(i=1; i<=n; i++) /// Cream vectorii v si u cu elementele pare si respectiv impare citite din fisier.
    {
        f >> x;

        if(x%2==0)
        {
            m++;

            v[m] = x;
        }
        else
        {
            p++;

            u[p] = x;
        }
    }

    f.close();

    if(m==0)
    {
        ok = 1;
    }
    else
    {
        if(m==1)
        {
            ok = 1;
        }
        else
        {
            ok = 1;

            for(i=1; i<=m-1 && ok == 1; i++)
            {
                if(v[i]>v[i+1])
                {
                    ok = 0;
                }
            }
        }
    }

    if(ok==0)
    {
        cout << "NU";
    }
    else
    {
        if(p==0)
        {
            ok = 1;
        }
        else
        {
            if(p==1)
            {
                ok = 1;
            }
            else
            {
                ok = 1;

                for(i=1; i<=p-1 && ok == 1; i++)
                {
                    if(u[i]<u[i+1])
                    {
                        ok = 0;
                    }
                }
            }
        }
        if(ok==0)
        {
            cout << "NU";
        }
        else
        {
            cout << "DA";
        }
    }

    return 0;
}
