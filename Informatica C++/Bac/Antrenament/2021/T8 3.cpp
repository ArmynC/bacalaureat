#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, y, z;
	
	ifstream f("bac.txt");

    while(f>>z)
    {
        if(z%2!=0)
        {
            x = y;
            y = z;
        }
    }

    f.close();

    if(x<0 || y<0)
    {
        cout << "nu exista";
    }
    else
    {
        cout << x << " " << y;
    }

    return 0;
}
