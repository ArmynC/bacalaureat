#include <iostream>

using namespace std;

void numar(int x, int &nrp)
{
    int d, k, y;

    nrp = 0;

    for(y=2; y<=x; y++)
    {
        k = 0;

        for(d=2; d*d<=y; d++)
        {
            if(y%d==0)
            {
                k++;
            }
        }

        if(k==0)
        {
            nrp++;
        }
    }
}

int main()
{
    int a, b, nr1, nr2, nrp, raspuns, x1, x2;

    cin >> a >> b;

    if(a>b)
    {
        swap(a,b);
    }

    numar(a,nrp);
    nr2 = nrp;

    numar(b,nrp);
    nr1 = nrp;

    raspuns = nr1-nr2;

    numar(a,nrp);
    x1 = nrp;

    numar(a-1,nrp);
    x2 = nrp;

    if(x1-x2==1)  /// A este numar prim.
    {
        raspuns++;
    }

    cout << raspuns;

    return 0;
}
