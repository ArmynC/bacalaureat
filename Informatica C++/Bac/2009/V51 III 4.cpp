#include <iostream>

using namespace std;

int main()
{
    int n, x, a[10], i, e, p, j;

    cin >> n;

    for(i=0; i<=n; i++)
    {
        cin >> a[i];
    }

    cin >> x;

    e = 0;

    if(n==0)
    {
        cout << a[0];
    }
    else
    {
        p = 1;

        for(j=1; j<=n; j++)
        {
            p *= x;
        }

        for(i=0; i<=n-1; i++)
        {
            e = e + a[i] * p;
            p = p / x;
        }

        e = e + a[n];

        cout << e;
    }

    return 0;
}
