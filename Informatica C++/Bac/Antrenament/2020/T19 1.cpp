#include <iostream>

using namespace std;

void paritate(int n, int &nr)
{
    int d;

    nr = 0;

    for(d=1; d<=n; d++)
    {
        if(n%d==0 && d%2==n%2)
        {
            nr++;
        }
    }
}

int main()
{
    int n, nr;

    cin >> n;

    paritate(n,nr);

    cout << nr;

    return 0;
}