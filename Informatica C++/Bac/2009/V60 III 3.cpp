#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int i, x, v[100];

    ifstream f("bac.txt");

    for(i=1; i<=100; i++)
    {
        f >> v[i];
    }

    f >> x;

    f.close();

    for(i=1; i<=100; i++)
    {
        if(v[i]==x)
        {
            cout << "DA";

            return 0;
        }
    }

    cout << "NU";

    return 0;
}
