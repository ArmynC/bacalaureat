/*

Prima linie: numar varfuri
A doua linie: numar muchii
Celalalte linii: muchii

- matrice adiacenta
- gradul varfurilor
- numarul de varfuri izolate si terminale
- tip graf

*/

#include <fstream>

using namespace std;

int a[100][100], grad[100];

int main()
{
    int n, m, i, j, x, y, grad_max, nr_i, nr_t;

    ifstream f("graf.in");
    ofstream g("graf.out");

    f >> n >> m;

    for(i=1; i<=m; i++)
    {
        f >> x >> y;

        a[x][y] = 1;
        a[y][x] = 1;
    }

    f.close();

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            g << a[i][j] << " ";
        }

        g << endl;
    }

    g << endl;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(a[i][j]==1)
            {
                grad[i]++;
            }
        }

        g << grad[i] << " ";
    }

    g << endl;

    nr_i = 0;
    nr_t = 0;

    for(i=1; i<=n; i++)
    {
        if(grad[i]==0)
        {
            nr_i++;
        }

        if(grad[i]==1)
        {
            nr_t++;
        }
    }

    g << nr_i << " " << nr_t << endl;

    if(m==(n*(n-1))/2)
    {
        g << "DA";
    }
    else
    {
        g << "NU";
    }

    g << endl;

    grad_max = -1;

    for(i=1; i<=n; i++)
    {
        if(grad[i]>grad_max)
        {
            grad_max = grad[i];
        }
    }

    g << grad_max << endl;

    for(i=1; i<=n; i++)
    {
        if(grad[i]==grad_max)
        {
            g << i << " ";
        }
    }

    g.close();

    return 0;
}
