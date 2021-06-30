#include <iostream>

using namespace std;

int main()
{
    int n, i, x, l, lmax;

    cin >> n;

    lmax = 0;
    l = 0;

    for(i=1; i<=n; i++)
    {
        cin >> x;

        if(x%2!=0)
        {
            if(l>lmax)
            {
                lmax = l;
            }

            l = 0;
        }
        else
        {
            l++;
        }
    }

    if(x%2==0)
    {
        if(l>lmax)
        {
            lmax = l;
        }
    }

    cout << lmax;

    return 0;
}
