#include <iostream>
using namespace std;

int main()
{
    int n, s, z, u, x;

    cin >> n;

    s = n/100;
    z = (n/10)%10;
    u = n%10;

    if(s<z)
    {
        x = s;
        s = z;
        z = x;
    }

    if(z<u)
    {
        x = z;
        z = u;
        u = x;
    }

    if(s<z)
    {
        x = s;
        s = z;
        z = x;
    }

    n = s*100+z*10+u;

    cout << n;
}
