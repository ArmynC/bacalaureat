#include <iostream>

using namespace std;

int sum(int x)
{
    if(x<4)
    {
        return 0;
    }
    else
    {
        int d, s;

        s = 0;

        for(d=2; d<=x/2; d++)
        {
            if(x%d==0)
            {
                s += d;
            }
        }

        return s;
    }

}

int main()
{
    int v[100], n, i, x, j, k;

    k = 0;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> x;
        k++;

        v[k] = sum(x);
    }

    for(i=1; i<=n-1; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(v[i]>v[j])
            {
                swap(v[i],v[j]);
            }
        }
    }

    for(i=1; i<=n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
