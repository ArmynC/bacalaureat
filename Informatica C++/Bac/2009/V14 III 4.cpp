#include <iostream>

using namespace std;

int prim(int n)
{
    int ok, d;

    if(n<2)
    {
        ok = 0;
    }
    else if(n==2)
    {
        ok = 1;
    }
    else if(n%2==0)
    {
        ok = 0;
    }
    else
    {
        ok = 1;
        d = 3;

        while(ok==1 && d*d<=n)
        {
            if(n%d==0)
            {
                ok = 0;
            }
            else
            {
                d += 2;
            }
        }

    }

    return ok;
}

int main()
{
    int v[30], prime[30], n, k, i, j;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> v[i];
    }

    k = 0;

    for(i=1; i<=n; i++)
    {
        if(prim(v[i])==1)
        {
            k++;

            prime[k] = v[i];
        }
    }

    for(i=1; i<=k-1; i++)
    {
        for(j=1+i; j<=k; j++)
        {
            if(prime[i]>prime[j])
            {
                swap(prime[i],prime[j]);
            }
        }
    }

    for(i=1; i<=k; i++)
    {
        cout << prime[i] << " ";
    }

    return 0;
}
