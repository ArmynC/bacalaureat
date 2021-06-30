#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, x, p, prim, d;
    bool ok;

    prim = 0;

    ifstream f("bac.txt");

    f >> n;

    for(p=1; p<=n; p++)
    {
        f >> x;

        ok = 1;
        d = 2;

        if(x<2)
        {
            ok = 0;
        }
        else
        {
            while(ok==1 && d*d<=x)
            {
                if(x%d==0)
                {
                    ok = 0;
                }
                else
                {
                    d++;
                }
            }
        }

        if(ok==1)
        {
            prim++;
        }
    }

    f.close();

    cout << prim;

    return 0;
}
