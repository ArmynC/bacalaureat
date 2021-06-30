#include <iostream>
#include <fstream>

using namespace std;

int fr[10];

int main()
{
    int x, c, i, s;

    ifstream f("bac.txt");

    while(f>>x)
    {
        if(x%2==0)
        {
            fr[x]++;
        }
    }

    f.close();

    s = 0;

    for(c=0; c<=8; c+=2)
    {
        s = s+fr[c];
    }

    if(s==0)
    {
        cout << "Nu exista";
    }
    else
    {
        for(c=0; c<=8; c+=2)
        {
            for(i=1; i<=fr[c]; i++)
            {
                cout << c << " ";
            }
        }
    }

    return 0;
}
