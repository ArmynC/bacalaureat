#include <iostream>
#include <fstream>

using namespace std;

int distinct_trei(int n)
{
    int cif, cx, k, d;

    k = 0;
    d = 0;
    cif = -1;

    while(n>0)
    {
        cx = cif;

        cif = n%10;

        if(cx==cif)
        {
            d++;
        }

        n /= 10;

        k++;
    }

    if(d==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n, x, k;

    ifstream f("numere.in");

    f >> n;

    while(f>>x)
    {
        if(distinct_trei(x) && x>=100 && x<=999)
        {
            cout << x << " ";
        }
    }

    return 0;
}
