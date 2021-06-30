#include <iostream>

using namespace std;

int verif(int x)
{
    int cif, k;

    k = 0;

    while(x!=0)
    {
        cif = x%10;

        if(cif%2!=0)
        {
            k++;

            if(k==3)
            {
                return 1;
            }
        }
        else
        {
            k = 0;
        }

        x /= 10;
    }

    return 0;
}
int main()
{
    int x;

    cin >> x;

    x /= 1000;

    if(verif(x)==1)
    {
        cout << "Da";
    }
    else
    {
        cout << "Nu";
    }

    return 0;
}
