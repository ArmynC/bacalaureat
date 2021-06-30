#include <iostream>

using namespace std;

int maxim(int n)
{
    int cmaximpar, cif;

    cmaximpar = 0;

    while(n)
    {
        cif = n%10;

        if(cif%2==0)
        {
            n = n/10;
        }
        else
        {
            if(cmaximpar<cif)
            {
                cmaximpar = cif;
            }

            n = n/10;
        }
    }

    if(cmaximpar==0)
    {
        cmaximpar = -1;
    }

    return cmaximpar;
}

int main()
{
    int n;

    cin >> n;

    cout << maxim(n);

    return 0;
}
