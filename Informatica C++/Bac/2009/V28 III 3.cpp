#include <iostream>

using namespace std;

int main()
{
    int n, i, nr;
    float ma, s, x[51];

    nr = 0;
    s = 0;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> x[i];

        s += x[i];
    }

    ma = s/n;

    for(i=1; i<=n; i++)
    {
        if(ma==x[i])
        {
            nr++;
        }
    }

    cout << nr;

    return 0;
}
