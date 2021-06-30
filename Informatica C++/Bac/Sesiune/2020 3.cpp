#include <iostream>
#include <fstream>

using namespace std;

int fr[1001];

int main()
{
    int x, nr, ok, nrp, i;

    ifstream f("bac.in");

    nr = 0;

    while(f>>x)
    {
        nr++;
        fr[x]++;
    }

    f.close();

    if(nr%2==0)
    {
        ok = 1;

        for(i=1; i<=1000 && ok==1; i++)
        {
            if(fr[i]%2!=0)
            {
                ok = 0;
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
    }
    else
    {
        nrp = 0;

        for(i=1; i<=1000; i++)
        {
            if(fr[i]%2!=0)
            {
                nrp++;
            }
        }

        if(nrp==0 || nrp>=2)
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
