#include <iostream>

using namespace std;

/// Algoritm de permutare circulara la stanga cu o pozitie a primelor n valori dintr-un vector.
void shift(int n, int x[101])
{
    int i, aux;

    aux = x[1];

    for(i=1; i<=n-1; i++)
    {
        x[i] = x[i+1];
    }

    x[n] = aux;
}

int main()
{
    int x[101], n, i;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> x[i];
    }

    for(i=n; i>=2; i--)
    {
        shift(i,x);
    }

    for(i=1; i<=n; i++)
    {
        cout << x[i] << " ";
    }

    return 0;
}
