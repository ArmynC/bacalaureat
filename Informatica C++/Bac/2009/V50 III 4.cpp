#include <fstream>

using namespace std;

int main()
{
    int n, x, i, v[10000];

    ifstream f("bac.in");
    ofstream g("bac.out");

    f >> n;

    for(i=0; i<=9999; i++)
    {
        v[i] = 0;
    }

    while(f>>x)
    {
        v[x]++;
    }

    f.close();

    for(i=0; i<=9999; i++)
    {
        if(v[i]>=2)
        {
            g << i << " ";
        }
    }

    g.close();

    return 0;
}
