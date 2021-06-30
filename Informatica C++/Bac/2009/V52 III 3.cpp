#include <iostream>
#include <fstream>

using namespace std;

int dist(int a)
{
    int cif, c, ok;

    cif = a%10;

    if(a<10)
    {
        return 1;
    }
    else
    {
        ok = 1;

        while(a>0 && ok==1)
        {
            c = a%10;

            if((c+cif)%2!=0)
            {
                ok = 0;
            }
            else
            {
                a = a/10;
            }
        }

        return ok;
    }
}

int main()
{
    int n, i, x, nr;
	
	nr = 0;

    ifstream f("date.in");

    f >> n;

    for(i=1; i<=n; i++)
    {
        f >> x;

        if(dist(x)==1)
        {
            cout << x << " ";
            nr++;
        }
    }

    f.close();

    if(nr==0)
    {
        cout << -1;
    }

    return 0;
}
