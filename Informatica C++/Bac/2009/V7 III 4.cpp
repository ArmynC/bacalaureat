#include <iostream>
#include <fstream>

using namespace std;

int sub(int n)
{
    int p;

    if(n<5)
    {
        return n;
    }
    else if(n<10)
    {
        return 5;
    }
    else
    {
        p = 5;

        while(p<n)
        {
            p *= 2;
        }

        if(p==n)
        {
            return p;
        }
        else
        {
            return p/2;
        }
    }
}

int main()
{
    int s;

    ofstream f("numere.txt");

    cin >> s;

    while(s>0)
    {
        f << sub(s) << " ";

        s -= sub(s);
    }

    f.close();

    return 0;
}
