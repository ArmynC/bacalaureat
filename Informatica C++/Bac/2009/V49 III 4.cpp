#include <iostream>
#include <fstream>

using namespace std;

void cmax(int a, int &b)
{
    int cif, n;

    n = a;
    b = -1;

    while(n>0)
    {
        cif = n%10;

        if(b<cif)
        {
            b = cif;
        }

        n /= 10;
    }

}
int main()
{
    int a, b, maxcif;

    maxcif = -1;
	
    ifstream f("bac.txt");

    while(f>>a)
    {
        cmax(a,b);

        if(maxcif<b)
        {
            maxcif = b;
        }
    }

    f.close();

    cout << maxcif;

    return 0;
}
