#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, poz1, poz2, x;

    n = 0;
    poz1 = 0;
    poz2 = 0;

	ifstream f("bac.in");
	
    while(f>>x)
    {
        n++;

        if(x>0)
        {
            if(poz1==0)
            {
                poz1 = n;
            }
            else
            {
                poz2 = n;
            }
        }
    }

    f.close();

    if(n-poz1+1>poz2)
    {
        cout << n-poz1+1;
    }
    else
    {
        cout << poz2;
    }

    return 0;
}
