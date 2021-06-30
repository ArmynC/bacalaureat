#include <iostream>
using namespace std;

int main()
{
    int n, nx, nr, k, s, cif;
    nr = 0;

    cin >> k;
    if(k==0)
    {
        cout << "k!=0";
        return 0;
    }
    else
    {
        do
        {
            s = 0;

            cin >> n;

            nx = n;

            while(nx!=0)
            {
                cif = nx%10;
                s = s + cif;
                nx = nx/10;
            }
            if(s==k)
            {
                nr++;
            }
        }
        while(nx!=0);

        cout << nr;
    }
}
