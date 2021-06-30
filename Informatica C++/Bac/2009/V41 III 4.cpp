#include <iostream>
#include <fstream>

using namespace std;

int n, c, v[10];

int main()
{
    int i;

    ifstream f("numere.txt");

    f >> n;

    /// Formam vectorul de frecventa al cifrelor citite din fisier.
    for(i=1; i<=n; i++)
    {
        f >> c;

        v[c]++;
    }

    f.close();

    /// Aflarea celei mai mari cifre pare din fisier.
    c = 8;

    while(c>=0)
    {
        if(v[c]==0)
        {
            c--;
        }
        else
        {
            cout << c << " ";

            c = -1;
        }
    }

    /// Aflarea celei mai mici cifre impare din fisier.
    c = 1;

    while(c<=9)
    {
        if(v[c]==0)
        {
            c++;
        }
        else
        {
            cout << c;

            c = 10;
        }
    }

    return 0;
}
