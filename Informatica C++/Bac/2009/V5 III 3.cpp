#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n;

    ofstream f("nr.txt");

    cin >> n;

    while(n>0)
    {
        f << n << " ";

        n /= 10;
    }

    f.close();

    return 0;
}
