#include <iostream>

using namespace std;

int main()
{
    int n, i, j, a[21][21];

    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i+j==n+1)
            {
                a[i][j] = 0;
            }
            else
            {
                if(i==1)
                {
                    if(i+j<n+1)
                    {
                        a[i][j] = n-j;
                    }
                }
                else if(i==n)
                {
                    if(i+j>n+1)
                    {
                        a[i][j] = j-1;
                    }
                }
                else
                {
                    if(i+j<n+1)
                    {
                        a[i][j] = n-i-j+1;
                    }
                    else
                    {
                        a[i][j] = j-n+i-1;
                    }
                }
            }
        }
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
