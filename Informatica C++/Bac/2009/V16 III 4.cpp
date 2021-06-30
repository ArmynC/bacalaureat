#include <iostream>
#include <fstream>

using namespace std;

int cifrak(int n, int k)
{
    int nr;

    nr = 0;

    while(n>0)
    {
        if(k==n%10)
        {
            nr++;
        }

        n /= 10;
    }

    return nr;
}

int main()
{
    int x;

    ifstream f("numere.txt");

    while(f>>x)
    {
        if(cifrak(x,0)==3)
        {
            cout << x << " ";
        }
    }

    f.close();

    return 0;
}
