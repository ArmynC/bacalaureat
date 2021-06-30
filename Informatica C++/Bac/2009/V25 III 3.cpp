#include <iostream>

using namespace std;

void f(int n, int a[10])
{
    int min, max, i, pmin, imax;

    min = 10000;
    max = -1;

    for(i=1; i<=n; i++)
    {
        if(a[i]%2==0 && min>a[i])
        {
            min = a[i];

            pmin = i;
        }

        if(a[i]%2!=0 && max<a[i])
        {
            max = a[i];

            imax = i;
        }
    }

    if(min==10000 || max==-1) ;
    else
    {
        swap(a[pmin],a[imax]);
    }
}

int main()
{
    int n, i, a[10];

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }

    f(n,a);

    for(i=1; i<=n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
