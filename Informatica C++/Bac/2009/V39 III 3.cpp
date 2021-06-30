#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, i, x, ok, k, v[1001];

    k = 0;

    ifstream f("bac.in");

    f >> n;

    for(i=1; i<=n; i++)
    {
        f >> x;

        if(x%2==0)
        {
            k++;

            v[k] = x;
        }
    }

    f.close();

    if(k==0)
    {
        cout << "NU";
    }
    else if(k==1)
    {
        cout << "DA";
    }
    else
    {
        ok = 1;

        for(i=1; ok==1 && i<=k-1; i++)
        {
            if(v[i]>v[i+1])
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

    return 0;
}
