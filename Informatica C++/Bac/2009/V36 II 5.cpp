#include <iostream>

using namespace std;

int main()
{
    int a[30][30], n, m, i, j, mincol;

    cin >> n >> m;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin >> a[i][j];
        }
    }

    for(j=m-1; j>=0; j--)
    {
        mincol = 10000;

        for(i=0; i<n; i++)
        {
            if(mincol>a[i][j])
            {
                mincol = a[i][j];
            }
        }

        cout << mincol << " ";
    }

    return 0;
}
