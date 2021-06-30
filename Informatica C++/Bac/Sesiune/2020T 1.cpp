#include <iostream>

using namespace std;

int kpn(int a, int b, int k)
{
    int y, x, nr, d, s;

    x = a;
    nr = 0;

    while(x<=b && nr<k)
    {
        s = 0;

        for(d=1; d<=x; d++)
        {
            if(x%d==0)
            {
                s = s+d;
            }
        }

        if((x+s)%2==0)
        {
            nr++;
            y = x;
            x++;
        }
        else
        {
            x++;
        }
    }

    if(nr==k)
    {
        return y;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int a, b, k;

    cin >> a >> b >> k;

    cout << kpn(a,b,k);

    return 0;
}
