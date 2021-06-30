#include <iostream>

using namespace std;

void afisare(int x, int y, int k)
{
    int nr, i;

    nr = 0;
    i = x;

    while(i<=y)
    {
        if(nr<k)
        {
            cout << i << " ";

            i++;
            nr++;
        }
        else
        {
            nr = 0;

            cout << '*' << " ";
            cout << i << " ";

            i++;
            nr++;
        }
    }

    cout << '*';
}

int main()
{
    int x, y, k;

    cin >> x >> y >> k;

    afisare(x,y,k);

    return 0;
}
