#include <iostream>

using namespace std;

float nreal(int x, int y)
{
    int k, cy, p, j;
    float f;

    k = 0;
    cy = y;

    while(cy>0)
    {
        k++;

        cy /= 10;
    }

    p = 1;

    for(j=1; j<=k; j++)
    {
        p *= 10;
    }

    f = x*p+y;
    f /= p;

    return f;
}

int main()
{
    int x, y;

    cin >> x >> y;

    cout << nreal(x,y);

    return 0;
}
