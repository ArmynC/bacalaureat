#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, k, i, x, nr, p;

    cin >> k;

    ifstream f("bac.txt");

    f >> n;

    nr = 0; /// Nr va reprezenta cate dintre numerele x pe care le vom citi sunt puteri ale lui k.

    for(i=1; i<=n; i++)
    {
        f >> x;

        /// Algoritm prin care verificam daca x este putere a lui k, adica daca x este de forma x = k^y.
        p = 1;

        while(p<x)
        {
            p *= k;
        }

        if(p==x)  /// Inseamna ca x este putere a lui k.
        {
            nr++;

            cout << x << " ";
        }
    }

    f.close();

    if(nr==0)
    {
        cout << "NU";
    }

    return 0;
}
