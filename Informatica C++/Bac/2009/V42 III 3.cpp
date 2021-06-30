#include <iostream>

using namespace std;

int p(int a[101], int n, int k)
{
    int i, j, s;

    s = 0;

    for(i=1; i<=n-1; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(a[i]<a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }

    for(i=1; i<=k; i++)
    {
        s += a[i];
    }

    return s;
}

int main()
{
    int n, i, k, a[101];

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }

    cin >> k;

    cout << p(a,n,k);

    return 0;
}
