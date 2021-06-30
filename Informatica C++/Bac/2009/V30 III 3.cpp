#include <iostream>

using namespace std;

int suma(int v[101], int n, int i, int j)
{
    int s, k;

    s = 0;

    for(k=1; k<=i-1; k++)
    {
        s += v[k];
    }

    for(k=j+1; k<=n; k++)
    {
        s += v[k];
    }

    return s;
}

int main()
{
    int n, i, v[101];

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> v[i];
    }

    cout << suma(v,n,3,6);

    return 0;
}
