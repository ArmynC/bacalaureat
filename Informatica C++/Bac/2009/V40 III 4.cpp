#include <iostream>
using namespace std;

int pr(int x)
{
    int d;
    bool ok;

    if(x<2)
    {
        ok = 0;
    }
    else if(x==2)
    {
        ok = 1;
    }
    else if(x%2==0)
    {
        ok = 0;
    }
    else
    {
        ok = 1;
        d = 3;

        while(ok==1 && d*d<=x)
        {
            if(x%d==0)
            {
                ok = 0;
            }
            else
            {
                d += 2;
            }
        }
    }

    return ok;
}

int sdiv(int y)
{
    int s, d;

    s = 0;

    for(d=1; d<=y; d++)
    {
        if(y%d==0)
        {
            s += d;
        }
    }

    return s;
}

int main()
{
    int n, x;

    cin >> n;

    for(x=2; x<=n-1; x++)
    {
        if(pr(sdiv(x))==1) /// Daca suma divizorilor lui x este numar prim atunci se afiseaza x.
        {
            cout << x << " ";
        }
    }

    return 0;
}
