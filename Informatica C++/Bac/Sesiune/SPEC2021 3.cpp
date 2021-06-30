#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, y, n;

    cin >> x >> y;

    ofstream g("date.out");

    n = (y-x)/2;

    while(x!=1)
    {
        cout << y << " ";
        y = x;
        x = x-2*n+2;
        n--;
    }

    cout << y << " " << 1;

    g.close();

    return 0;
}
