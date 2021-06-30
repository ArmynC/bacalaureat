#include <iostream>

using namespace std;

void cif(int nr, int &s)
{
    int cifra, copie;

    s = 0;
    copie = nr;

    while(copie>0)
    {
        cifra = copie%10;

        s += cifra;

        copie /= 10;
    }
}

int main()
{
    int i, n, v[25], s, maxs;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> v[i];
    }

    maxs = -1;

    for(i=1; i<=n; i++)
    {
        cif(v[i],s); /// In acest moment s este suma cifrelor lui v[i].

        if(maxs<s)
        {
            maxs=s;
        }
    }

    for(i=1; i<=n; i++)
    {
        cif(v[i],s);

        if(maxs==s)
        {
            cout << v[i]<< " ";
        }
    }

    return 0;
}
