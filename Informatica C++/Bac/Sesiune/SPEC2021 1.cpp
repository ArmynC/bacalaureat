#include <iostream>

using namespace std;

void imog(int x, int y, int &rez)
{
    int cif, nr1, nr2, p, ogl;

    nr1 = 0;
    nr2 = 0;
    p = 1;

    while(x)
    {
        cif = x%10;

        if(cif%2!=0)
        {
            nr1 = nr1 + p * cif;
            p = p * 10;
        }

        x /= 10;
    }

    p = 1;

    while(y)
    {
        cif = y%10;

        if(cif%2!=0)
        {
            nr2 = nr2 + p * cif;
            p = p * 10;
        }

        y /= 10;
    }

    ogl = 0;

    p = 1;
    while(nr1)
    {
        cif = nr1%10;

        ogl = ogl * 10 + cif;

        nr1 /= 10;
    }

    if(ogl==nr2)
    {
        if(ogl%2!=0 && nr2%2!=0)
        {
            rez = 1;
        }
        else
        {
            rez = 0;
        }
    }
}

int main()
{
    int x, y, rez;

    cin >> x >> y;

    imog(x,y,rez);

    cout << rez;

    return 0;
}
