#include <iostream>
#include <fstream>

using namespace std;

void cifre(int a, int &b)
{
    int fr[10], c, j;

    for(c=0; c<=9; c++)
    {
        fr[c] = 0;
    }

    while(a)
    {
        c = a%10;
        fr[c]++;

        a /= 10;
    }

    b = 0;

    for(c=1; c<=9; c++)
    {
        for(j=1; j<=fr[c]; j++)
        {
            b = b*10+c;
        }
    }
}

int main()
{
    int n, i, a, b, nr;

    nr = 0;

    ifstream f("date.in");

    f >> n;

    for(i=1; i<=n; i++)
    {
        f >> a;

        cifre(a,b);

        if(b==a)
        {
            cout << a << " ";
            nr++;
        }
    }

    f.close();

    if(nr==0)
    {
        cout << 0;
    }

    return 0;
}
