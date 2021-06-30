#include <iostream>
#include <fstream>

using namespace std;

int fr[100];

int main()
{
    int x, i, nr;

	nr = 0;
	
    ifstream f("bac.in");

    while(f>>x)
    {
        if(x>=10 && x<=99)
        {
            fr[x]++;
        }
    }

    f.close();

    i = 99;

    while(i>=10 && nr<2)
    {
        if(fr[i]==0 && i%10!=i/10)
        {
            cout << i << " ";

            nr++;
            i--;
        }
        else
        {
            i--;
        }
    }

    if(nr<2)
    {
        cout << "nu exista";
    }

    return 0;
}
