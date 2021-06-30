#include <iostream>

using namespace std;

int main()
{
    int x, cx, i, j, k;

    cin >> x;

    cx = x;

    k = 0;

    while(cx>0)
    {
        k++;
        cx /= 10;
    }

    int a[k+1][k+1];

    for(j=k; j>=1; j--)
    {
        for(i=1; i<=k; i++)
        {
            a[i][j] = x%10;
        }

        x /= 10;
    }

    for(i=1; i<=k; i++)
    {
        for(j=1; j<=k; j++)
        {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
