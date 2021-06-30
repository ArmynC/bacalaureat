#include <iostream>
#include <fstream>

using namespace std;

void sterge(int v[101], int &n, int i)
{
    int k;

    for(k=i; k<=n-1; k++)
    {
        v[k] = v[k+1];
    }

    n--;
}

int main()
{
    int n, v[101], i;

    ifstream f("numere.in");

    f >> n;

    for(i=1; i<=n; i++)
    {
        f >> v[i];
    }

    f.close();

    for(i=1; i<=n-1; i++)
    {
        if(v[i]==v[i+1])
        {
            sterge(v,n,i+1);
            i--;
        }
    }

    for(i=1; i<=n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
