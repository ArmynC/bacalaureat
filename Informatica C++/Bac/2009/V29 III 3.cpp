#include <iostream>

using namespace std;

int main()
{
    int a, b, c, mult, k, nr;

    cin >> a >> b >> c;

    k = a/c;

    if(k*c>=a)
    {
        k = k;
    }
    else
    {
        k += 1;
    }

    nr = 0;

    mult = k*c;

    while(mult<=b)
    {
        nr++;

        k++;

        mult = k*c;
    }

    cout << nr;

    return 0;
}
