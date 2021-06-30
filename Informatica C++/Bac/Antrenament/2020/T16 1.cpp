#include <iostream>

using namespace std;

int nrDivPrimi(int n)
{
    int d, exp, nr;

    nr = 0;
    d = 2;

    while(d<=n)
    {
        if(n%d!=0)
        {
            d++;
        }
        else
        {
            exp = 0;

            while(n%d==0)
            {
                n /= d;
                exp++;
            }
            if(exp%2!=0)
            {
                nr++;
            }

            d++;
        }
    }

    return nr;
}

int main()
{
    int n;

    cin >> n;

    cout << nrDivPrimi(n);

    return 0;
}
