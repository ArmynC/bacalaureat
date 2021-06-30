#include <iostream>

using namespace std;

int resturi(int n, int x, int y, int r)
{
    int z, nr;

    nr = 0;

    for(z=1; z<=n; z++)
    {
        if(z%x==r && z%y==r)
        {
            nr++;
        }
    }

    return nr;
}

int main()
{
    int n, x, y, r;

    cin >> n >> x >> y >> r;

    cout << resturi(n,x,y,r);

    return 0;
}
