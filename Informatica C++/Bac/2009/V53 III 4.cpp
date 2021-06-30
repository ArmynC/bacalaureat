#include <iostream>

using namespace std;

int main()
{
    int n, cn, aux, i, j, v[101];

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> v[i];
    }

    cn = n-1;

    while(cn)
    {
        aux = v[1];

        for(i=2; i<=n; i++)
        {
            v[i-1] = v[i];
        }

        v[n] = aux;

        for(i=1; i<=n; i++)
        {
            cout << v[i] << " ";
        }

        cout << endl;

        cn--;
    }

    return 0;
}