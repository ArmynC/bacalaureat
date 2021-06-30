#include <iostream>
#include <fstream>

using namespace std;

int cmmdc(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a = a-b;
        }
        else
        {
            b = b-a;
        }
    }

    return a;
}

int main()
{
    int n, v[101], nr, i;

    nr = 0;

    ifstream f("date.in");

    f >> n;

    for(i=1; i<=n; i++)
    {
        f >> v[i];
    }

    f.close();

    for(i=1; i<=n-1; i++)
    {
        if(cmmdc(v[i],v[i+1])==1)
        {
            nr++;
        }
    }

    cout << nr;

    return 0;
}
