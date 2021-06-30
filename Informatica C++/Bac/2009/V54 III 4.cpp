#include <iostream>

using namespace std;

int main()
{
    int n, i, v[101], nr;

    nr = 0;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> v[i];
    }

    for(i=2; i<=n-1; i++)
    {
        if(v[i]==v[i-1]+v[i+1])
        {
            nr++;
        }
    }

    cout << nr;

    return 0;
}
