#include <iostream>
#include <fstream>

using namespace std;

void inter(int &x, int &y)
{
    int aux;

    aux = x;
    x = y;
    y = aux;
}

int main()
{
    int n, i, v[1001], j;

    ifstream f("bac.in");

    f >> n;

    for(i=1; i<=n; i++)
    {
        f >> v[i];
    }

    f.close();

    for(i=1; i<=n-1; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(v[i]>v[j])
            {
                inter(v[i],v[j]);
            }
        }
    }

    for(i=1; i<=n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
