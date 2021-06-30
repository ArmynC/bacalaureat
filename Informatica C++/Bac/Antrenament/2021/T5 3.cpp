#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, i, x, max;

    ifstream f("bac.txt");

    f >> n;

    f >> x;

    max = x;

    cout << max << " ";

    for(i=2; i<=n; i++)
    {
        f >> x;

        if(max<x)
        {
            cout << x << " ";
            max = x;
        }
        else
        {
            cout << max << " ";
        }
    }

    f.close();

    return 0;
}
