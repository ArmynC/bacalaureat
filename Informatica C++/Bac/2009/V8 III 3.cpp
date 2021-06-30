#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, i, k;

    ofstream f("bac.txt");

    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(k=0; k<=n-i; k++)
        {
            f << 2*k << " ";
        }

        f << endl;
    }

    f.close();

    return 0;
}
