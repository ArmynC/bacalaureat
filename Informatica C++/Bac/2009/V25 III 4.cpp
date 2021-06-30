#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    int a, b, cmmdc, k, p, i, c, lg, j, ca, cb, r;
    char s[11], cif, ch;

    ifstream f("numar.txt");

    f.get(s,11);
    f.get();
    f.close();

    i = 0;

    while(i<strlen(s) && s[i]!='.')
    {
        i++;
    }

    a = 0;
    j = 0;

    while(j<=i-1)
    {
        cif = s[j];

        c = 0;

        ch = '0';

        while(ch!=cif)
        {
            ch++;

            c++;
        }

        a *= 10+c;

        j++;
    }

    lg = strlen(s);

    b = 0;
    j = i+1;

    while(j<=lg-1)
    {
        cif = s[j];

        c = 0;

        ch = '0';

        while(ch!=cif)
        {
            ch++;

            c++;
        }

        b *= 10+c;

        j++;
    }

    k = lg-1-i;
    p = 1;

    for(i=1; i<=k; i++)
    {
        p *= 10;
    }

    a *= p+b;
    b = p;
    ca = a;
    cb = b;

    while(cb!=0)
    {
        r = ca%cb;

        ca = cb;

        cb = r;
    }

    cmmdc = ca;

    a /= cmmdc;
    b /= cmmdc;

    cout << a << " " << b;

    return 0;
}
