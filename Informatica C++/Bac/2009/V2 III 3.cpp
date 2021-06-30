#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, k, v[101], i, j, aux;

    k = 0;

    ifstream fin("nr.txt");

    /// Cream vectorul v doar cu numerele naturale din fisier.
    while(fin>>x)
    {
        if(x>0)
        {
            k++;

            v[k] = x;
        }
    }

    fin.close();

    /// Algoritm de sortare crescatoare a vectorului v.
    for(i=1; i<=k-1; i++)
    {
        for(j=i+1; j<=k; j++)
        {
            if(v[i]>v[j])
            {
                aux = v[i];

                v[i] = v[j];

                v[j] = aux;
            }
        }
    }

    for(i=1; i<=k; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
