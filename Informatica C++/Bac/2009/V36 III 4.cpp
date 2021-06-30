#include <iostream>
#include <fstream>

using namespace std;

int cifra(int a)
{
    int cif, k=0;

    k = 0;

    if(a==0)
    {
        return 0;
    }
    else
    {
        while(a>0)
        {
            cif = a%10;

            if(cif%2==0)
            {
                k++;

                break;
            }

            a /= 10;
        }

        if(k>0)
        {
            return cif;
        }
        else
        {
            return -1;
        }
    }
}

int main()
{
    int n, x, k, v[1001], j, i;

    k = 0;

    ifstream f("bac.in");

    f >> n;

    for(i=1; i<=n; i++)
    {
        f >> x;

        if(cifra(x)!=-1)
        {
            k++;

            v[k] = cifra(x);
        }

    }

    f.close();

    if(k==0)
    {
        cout << "-1";
    }
    else
    {
        for(i=1; i<=k-1; i++)
        {
            for(j=i+1; j<=k; j++)
            {
                if(v[i]<v[j])
                    swap(v[i],v[j]);
            }
        }

        for(i=1; i<=k; i++)
        {
            cout << v[i];
        }
    }

    return 0;
}
