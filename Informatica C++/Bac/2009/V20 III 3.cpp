#include <iostream>

using namespace std;

void nule(int a[100], int n)
{
    int i, v[100], u[100], m, k;

    m = 0;
    k = 0;

    for(i=1; i<=n; i++)
    {
        if(a[i]!=0)
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
    int i, n, a[100];

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }

    nule(a,n);

    if(a[5]!=0)
    {
        for(i=1; i<=5; i++)
        {
            cout << a[i] << " ";
        }
    }
    else
    {
        cout << "NU EXISTA";
    }

    return 0;
}
