#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, y, s, smax;

    ifstream f("bac.txt");

    s = 0;
    smax = 0;

    f >> x;

    s = s+x;

    while(f>>y)
    {
        if(y%2==x%2)
        {
            s = s+y;
            x = y;
        }
        else if(smax<s)
        {
            smax = s;
            s = 0;
            x = y;
            s = s+x;
        }
        else
        {
            s = 0;
            x = y;
            s = s+x;
        }
    }

    if(smax<s)
    {
        smax = s;
    }

    f.close();

    cout << smax;

    return 0;
}
