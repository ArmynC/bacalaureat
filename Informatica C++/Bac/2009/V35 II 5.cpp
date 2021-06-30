#include <iostream>

using namespace std;

int main()
{
    int a[50][50], n, i, j, mincol;

    cin >> n;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(j=0; j<n; j++)
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
