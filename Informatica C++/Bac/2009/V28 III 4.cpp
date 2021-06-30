#include <iostream>
#include <fstream>

using namespace std;

int primul(int a)
{
    int d;

    d = 2;

    while(d<=a && a%d!=0)
    {
        d++;
    }

    return d;
}

int main()
{
    int n, i, x, d;

    ifstream f("numere.in");

    f >> n;

    for(i=1; i<=n; i++)
    {
        f >> x;

        if(primul(x/primul(x))==x/primul(x))
        {
            cout << x << " ";
        }
    }

    f.close();

    return 0;
}
