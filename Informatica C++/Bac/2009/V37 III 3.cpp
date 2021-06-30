#include <iostream>

using namespace std;

int main()
{
    int v[101], n, i, k, x, aux;

    cin >> n >> k;

    for(i=1; i<=n; i++)
    {
        cin >> v[i];
    }

    for(x=1; x<=k; x++)
    {
        /* Algoritm de permutare circulara la stanga cu o pozitie
           a tuturor elementelor unui vector. */

        aux = v[1];

        for(i=1; i<=n-1; i++)
        {
            v[i] = v[i+1];
        }

        v[n] = aux;
    }

    for(i=1; i<=n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
