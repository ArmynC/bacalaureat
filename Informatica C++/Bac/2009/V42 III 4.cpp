#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, i, x, y, ok;

    ifstream f("numere.txt");

    f >> n >> x;

    ok = 1;

    for(i=2; i<=n; i++)
    {
        f >> y;

        if(x>=y)
        {
            ok = 0;
        }

        x = y;
    }

    f.close();

    if(ok==1)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}
