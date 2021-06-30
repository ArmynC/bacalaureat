#include <iostream>

using namespace std;

int cmdiv(int x, int y)
{
    int cmmdc;

    if(x==1 || y==1)
    {
        cmmdc = 1;
    }
    else
    {
        /// Algoritmul cu scaderi succesive pentru determinarea cmmdc-ului.
        while(x!=y)
        {
            if(x>y)
            {
                x = x-y;
            }
            else
            {
                y = y-x;
            }
        }

        cmmdc = x;
    }

    return cmmdc;
}

int main()
{
    int n, x, nr;

    cin >> n;

    if(n==1)
    {
        nr = 1;
    }
    else
    {
        nr = 0;

        for(x=1; x<=n; x++)
        {
            if(cmdiv(x,n)==1)
            {
                nr++;
            }
        }
    }

    cout << nr;

    return 0;
}
