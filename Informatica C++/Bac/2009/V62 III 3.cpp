#include <iostream>

using namespace std;

void fibo(int n, int v[30])
{
    int f1, f2, f3, nr;

    nr = 0;

    if(n==2)
    {
        f1 = 1;
        f2 = 1;
        nr++;

        v[nr] = f1;
        nr++;

        v[nr] = f2;
    }
    else
    {
        f1 = 1;
        f2 = 1;
        nr++;

        v[nr] = f1;
        nr++;

        v[nr] = f2;

        while(nr<n)
        {
            f3 = f1+f2;

            if(f3%2!=0)
            {
                nr++;
                v[nr] = f3;
            }

            f1 = f2;
            f2 = f3;
        }
    }

}

int main()
{
    int n, i, v[30];

    cin >> n;

    fibo(n,v);

    for(i=1; i<=n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
