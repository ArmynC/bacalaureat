#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, i, x, p;

    ifstream f("bac.txt");

    f >> n;

    f >> x;

    p = 1;

    while(p<x)
    {
        p *= 2;
    }

    cout << p << " ";

    for(i=1; i<=n-1; i++)
    {
        f >> x;

        if(p>=x)
        {
            cout << p << " ";
        }
        else
        {
            while(p<x)
            {
                p *= 2;
            }
            cout << p << " ";
        }
    }

    f.close();

    return 0;
}
