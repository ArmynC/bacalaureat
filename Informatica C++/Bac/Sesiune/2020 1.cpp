#include <iostream>

using namespace std;

int suma(int a, int b)
{
    int d, s;

    s = 0;

    if(a>b)
    {
        swap(a,b);
    }

    for(d=1; d<=a; d++)
    {
        if(a%d==0 && b%d==0)
        {
            s += d;
        }
    }

    return s;
}

int main()
{
    int a, b;

    cin >> a >> b;

    suma(a,b);

    return 0;
}
