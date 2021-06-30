#include <iostream>
#include <fstream>

using namespace std;

int cifre_impare(int n)
{
    int cif, par;

    par = 0;

    while(n>0)
    {
        cif = n%10;

        if(cif%2==0)
        {
            par = 1;
        }

        n /= 10;
    }

    if(par==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n, x;

    ifstream f("numere.txt");

    f >> n;

    while(f>>x)
    {
        if(x>100 && cifre_impare(x))
        {
            cout << x << " ";
        }
    }

    f.close();

    return 0;
}
