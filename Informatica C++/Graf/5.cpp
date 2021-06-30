#include <fstream>

using namespace std;

int a[100][100], LV[100][100], n, m, grad[100];

int main()
{
    /* Creaza matricea de vecini pornind de la matricea de adiacenta */

    int i, j, x, y, k;

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
            if(a[i][j]==1)
            {
                grad[i]++;
            }
        }
    }

    for(i=1; i<=n; i++)
    {
        LV[i][1] = grad[i];

        k = 1;

        if(LV[i][1]>0)
        {
            for(j=1; j<=n; j++)
            {
                if(a[i][j]==1)
                {
                    k++;

                    LV[i][k] = j;
                }
            }
        }
    }

    for(i=1; i<=n; i++)
    {
        if(LV[i][1]==0)
        {
            g << "Nu exista vecini ai varfului " << i << endl;
        }
        else
        {
            for(j=1; j<=n && LV[i][j]!=0; j++)
            {
                g << LV[i][j] << " ";
            }

        }
        g << endl;
    }

    g.close();

    return 0;
}
