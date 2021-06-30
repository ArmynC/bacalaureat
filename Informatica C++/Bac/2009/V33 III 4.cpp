#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, m, x, k, s, i;

    k = 0;
    s = 0;

    ifstream f("numere.txt");

    f >> n >> m;

    for(i=1; i<=n; i++)
    {
        f >> x;

        k++;

        if(k>=n-m+1)
        {
            s += x;
        }
    }

    f.close();

    cout << s;

    return 0;
}
