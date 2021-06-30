#include <iostream>

using namespace std;

int putere(int n, int p)
{
    int d, e, k;

    k = 0;

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

            if(p==d && e>0)
            {
                p = e;
                k++;

                break;
            }
        }
    }

    if(k==0)
    {
        p = -1;
    }

    return p;
}

int main()
{
    int n, p;

    cin >> n >> p;

    cout << putere(n,p);

    return 0;
}
