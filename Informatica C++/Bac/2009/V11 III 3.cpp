#include <iostream>

using namespace std;

void p(int a[101], int k, int &max)
{
    int i, maxim;

    maxim = -10000;

    for(i=1; i<=k; i++)
    {
        if(maxim<a[i])
        {
            maxim = a[i];
        }
    }

    max = maxim;
}

int main()
{
    int a[101], n, i, v[101], max;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }

    for(i=1; i<=n; i++)
    {
        p(a,i,max);

        v[i] = max;
    }

    for(i=1; i<=n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
