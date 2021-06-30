#include <iostream>

using namespace std;

int main()
{
    int n, g, i, nrafis;

    g = 1;
    nrafis = 0;

    cin >> n;

    while(nrafis<n)  /// Cat timp nu s-au facut cele n afisari.
    {
        for(i=g; i>=1 && nrafis<n; i--)
        {
            cout << i << " ";

            nrafis++;
        }

        if(nrafis<n)
        {
            g++;
        }
    }

    return 0;
}
