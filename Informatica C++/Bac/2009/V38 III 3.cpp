#include <iostream>

using namespace std;

void del(int &x, int y)
{
    /* Formam un nou numar n doar cu cifrele mai mici sau egale decat y
    si in z numaram cate cifre de 0 exista in numarul x initial. */

    int cif, cx, n, z, p;

    cx = x;
    n = 0;
    p = 1;

    while(cx>0)
    {
        cif = cx%10;

        if(cif==0)
        {
            z++;
        }

        if(cif<=y)
        {
            n += p*cif;
            p *= 10;
        }

        cx /= 10;
    }

    if(n>0)
    {
        x = n;
    }
    else
    {
        if(z==0)
        {
            x = -1;
        }
        else
        {
            x = 0;
        }
    }
}

int main()
{
    int x, y;

    cin >> x >> y;

    del(x,y);

    cout << x << " " << y;

    return 0;
}
