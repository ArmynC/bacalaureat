#include <iostream>

using namespace std;

void prodprim(int n, int &p)
{
    int d, e, pr;

    pr = 1;

    for(d=2; d*d<n; d++)
    {
        while(n>1)
        {
            e = 0;

            while(n%d==0)
            {
                e++;
                n /= d;
            }

            if(e>0)
            {
                pr = pr * d;
            }

            d++;
        }
    }

    p = pr;
}

int main()
{
    int n, p;

    cin >> n;

    prodprim(n,p);

    cout << p;

    return 0;
}
