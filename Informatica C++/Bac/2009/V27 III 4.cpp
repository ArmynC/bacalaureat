#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    int n, i, a, b;
    float x;

    ifstream f("numere.in");

    f >> n;

    for(i=1; i<=n; i++)
    {
        f >> x;

        if(i==1)
        {
            a = floor(x);
        }

        if(i==n)
        {
            if(x==floor(x))
            {
                b = x;
            }
            else
            {
                b = floor(x) + 1;
            }
        }
    }

    f.close();

    cout << a << " " << b;

    return 0;
}
