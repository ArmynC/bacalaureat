#include <iostream>

using namespace std;

int cinci(int n, int v[21])
{
    int k, i, c;

    k = 0;

    for(i=1; i<=n; i++)
    {
        while(v[i]>0)
        {
            c = v[i]%10;

            if(c==5)
            {
                k++;
            }

            v[i] /= 10;
        }

    }

    return k;
}

int main()
{
    int n, v[21], i;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> v[i];
    }

    cout << cinci(n,v);

    return 0;
}
