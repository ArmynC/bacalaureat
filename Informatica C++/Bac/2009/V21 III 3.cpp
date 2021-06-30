#include <iostream>

using namespace std;

int i_prim(int n)
{
    int p1, p2, ok, gasit, d;

    p1 = n;
    p2 = n;
    gasit = 0;

    while(gasit==0)
    {
        d = 2;
        ok = 1;

        while(ok==1 && d*d<=p1)
        {
            if(p1%d==0)
            {
                ok = 0;
            }
            else
            {
                d += 1;
            }
        }

        if(ok==0)
        {
            p1--;
        }
        else
        {
            gasit = 1;
        }
    }

    gasit = 0;

    while(gasit==0)
    {
        d = 2;
        ok = 1;

        while(ok==1 && d*d<=p2)
        {
            if(p2%d==0)
            {
                ok = 0;
            }
            else
            {
                d += 1;
            }
        }

        if(ok==0)
        {
            p2++;
        }
        else
        {
            gasit = 1;
        }
    }

    return p2-p1;
}

int main()
{
    int n;

    cin >> n;

    cout << i_prim(n);

    return 0;
}
