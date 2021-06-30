#include <iostream>

using namespace std;

void frate(int x, int &y)
{
    int cif, p;

    y = 0;
    p = 1;

    while(x)
    {
        cif = x%10;

        if(cif!=9)
        {
            cif++;
            y = y + p * cif;
            p = p * 10;
        }
        else
        {
            y = -1;
            break;
        }

        x = x/10;
    }
}


int main()
{
    int x, y;

    cin >> x;

    frate(x, y);

    cout << y;

    return 0;
}
