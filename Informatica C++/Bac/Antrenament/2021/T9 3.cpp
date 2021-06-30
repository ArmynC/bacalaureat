#include <iostream>
#include <fstream>

using namespace std;

int fr[10];

int main()
{
    int x, c, i;

    ifstream f("numere.txt");

    while(f>>x)
    {
        while(x>0)
        {
            c = x%10;
            fr[c]++;
            x /= 10;
        }
    }

    f.close();

    for(c=9; c>=0; c--)
    {
        for(i=1; i<=fr[c]; i++)
        {
            cout << c;
        }
    }

    return 0;
}
