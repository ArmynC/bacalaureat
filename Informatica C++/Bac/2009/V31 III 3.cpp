#include <iostream>

using namespace std;

void ordonare(int x[101], int n)
{
    int i, j;

    for(i=1; i<=n-1; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(x[i]>x[j] && x[i]%2!=0 && x[j]%2!=0)
            {
                swap(x[i],x[j]);
            }
        }
    }
}

int main()
{
    int n, i, x[101];

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> x[i];
    }

    ordonare(x,n);

    for(i=1; i<=n; i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}
