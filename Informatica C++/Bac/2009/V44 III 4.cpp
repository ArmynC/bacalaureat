#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, i, x, fr[100];

    fstream f("numere.txt");

    for(i=0; i<=99; i++)
    {
        fr[i] = 0;
    }

    f >> n;

    for(i=1; i<=n; i++)
    {
        f >> x;

        fr[x]++;
    }

    f.close();

    for(i=0; i<=99; i++)
    {
        if(fr[i]>=2)
        {
            cout << i << " ";
        }
    }

    return 0;
}
