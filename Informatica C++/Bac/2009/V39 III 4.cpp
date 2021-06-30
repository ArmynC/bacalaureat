#include <iostream>

using namespace std;

int pr(int x)
{
    int d, ok;

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
int main()
{
    int n, x, p;

    cin >> n;

    x = 10;
    p = 1;

    while(x>=10)
    {
        p *= 10;
        x = n/p;

        if(x>=10 && pr(x)==1)
        {
            cout << x << " ";
        }
    }

    return 0;
}
