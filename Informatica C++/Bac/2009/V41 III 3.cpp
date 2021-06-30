#include <iostream>

using namespace std;

int MULT(int a[101], int n)
{
    int i, minn, maxx, ok, j;

    /*
        Algoritm prin care verificam daca vectorul a cu n elemente constituie o permutare
        a multimii {1, 2, ..., n}.

        Acest lucru se intampla daca sunt verificate simultan urmatoarele 3 conditii:
         - toate elementele vectorului a sunt distincte doua cate doua
         - minimul din vectorul a este 1
         - maximul din vectorul a este n
    */

    minn = a[1];
    maxx = a[1];

    for(i=1; i<=n; i++)
    {
        if(minn>a[i])
        {
            minn = a[i];
        }
        if(maxx<a[i])
        {
            maxx = a[i];
        }
    }

    if(!(minn==1 && maxx==n))
    {
        ok = 0;
    }
    else
    {
        ok = 1;
    }

    if(ok==1)
    {
        for(i=1; i<=n-1 && ok==1; i++)
        {
            for(j=i+1; j<=n && ok==1; j++)
            {
                if(a[i]==a[j])
                {
                    ok = 0;
                }
            }
        }
    }

    return ok;
}

int main()
{
    int n, i, a[101];

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }

    cout << MULT(a,n);

    return 0;
}
