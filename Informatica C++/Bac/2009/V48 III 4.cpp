#include <fstream>

using namespace std;

int main()
{
    int n, i, x, fr[10000];

    ifstream f("bac.in");
    ofstream g("bac.out");

    for(x=0; x<=9999; x++)
    {
        fr[x] = 0;
    }

    f >> n;

    for(i=1; i<=n; i++)
    {
        f >> x;

        fr[x]++;
    }

    f.close();

    for(x=0; x<=9999; x++)
    {
        if(fr[x]==1)
        {
            g << x << " ";
        }
    }

    g.close();

    return 0;
}
