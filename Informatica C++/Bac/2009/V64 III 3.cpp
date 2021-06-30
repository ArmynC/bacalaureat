#include <iostream>

using namespace std;

int diviz(int n, int a[201])
{
    int nr, i, j;

    nr = 0;

    for(i=1; i<=n-1; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(a[j]%a[i]==0 || a[i]%a[j]==0)
            {
                nr++;
            }
        }
    }

    return nr;
}

int main()
{
    int n, i, a[201];

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }

    cout << diviz(n,a);

    return 0;
}
