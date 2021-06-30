#include <iostream>

using namespace std;

void aranjare(float a[100], int n)
{
    int i, v[100], u[100], m, k;

    m = 0;
    k = 0;

    for(i=1; i<=n; i++)
    {
        if(a[i]<0)
        {
            m++;

            v[m] = a[i];
        }
        else
        {
            k++;

            u[k] = a[i];
        }
    }

    i = 1;

    while(i<=m)
    {
        a[i] = v[i];

        i++;
    }

    for(i=1; i<=k; i++)
    {
        a[m+i] = u[i];
    }
}

int main()
{
    int i, n;
    float a[100];

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }

    aranjare(a,n);

    for(i=n; i>=1; i--)
    {
        cout << a[i] << " ";
    }

    return 0;
}
