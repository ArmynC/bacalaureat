#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, i, a, b, aa, bb, maxl;

    ifstream f("bac.txt");

    f >> n;

    maxl = 0;

    for(i=1; i<=n; i++)
    {
        f >> a >> b;

        if(maxl<b-a+1)
        {
            maxl = b-a+1;

            aa = a;

            bb = b;
        }
        else if(maxl==b-a+1)
        {
            if(b<bb)
            {
                aa = a;

                bb = b;
            }
        }
    }

    f.close();

    cout << "[" << aa << ";" << bb << "]";

    return 0;
}
