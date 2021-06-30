#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, i, a, b, p;

    ifstream f("bac.txt");

    f >> n;

    for(i=1; i<=n; i++)
    {
        p = 1;

        f >> a >> b;

        while(p<a)
        {
            p *= 2;
        }

        if(p>b)
        {
            cout << 0 << " ";
        }
        else
        {
            while(p<b)
            {
                p *= 2;
            }

            p /= 2;

            cout << p << " ";
        }
    }

    f.close();

    return 0;
}
