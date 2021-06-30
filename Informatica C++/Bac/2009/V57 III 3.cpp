#include <fstream>

using namespace std;

int main()
{
    int n, v[100], i, j;

    ifstream f("intrare.txt");
    ofstream g("iesire.txt");

    f >> n;

    for(i=1; i<=n; i++)
    {
        f >> v[i];
    }

    for(i=1; i<=n-1; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            g << v[i] + v[j] << " ";
        }
    }

    f.close();
    g.close();

    return 0;
}
