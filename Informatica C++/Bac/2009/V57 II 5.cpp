#include <iostream>

using namespace std;

int main()
{
    int mat[25][25], n, i, a, j;

    cin >> n >> a;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i<a)
            {
                mat[i][j] = 1;
            }
            else if(i==a)
            {
                mat[i][j] = 0;
            }
            else
            {
                mat[i][j] = 2;
            }
        }
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout << mat[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
