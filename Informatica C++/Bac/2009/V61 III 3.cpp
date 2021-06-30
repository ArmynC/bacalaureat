#include <iostream>
#include <cmath>

using namespace std;

void cifra(float x, int &y)
{
    int k;

    k = (int)(floor(x));

    y = k%10;
}
int main()
{
    float x, y;
    int z, z1, z2;

    cin >> x >> y;

    if(x<3 || x>10 || y < 3 || y > 10)
    {
        cout << "NU";
    }
    else
    {
        if(x==10 && y==10)
        {
            cout << "DA";
        }
        else if(x==10 && y!=10)
        {
            cifra(y,z);

            if(z==9)
            {
                cout << "DA";
            }
            else
            {
                cout << "NU";
            }
        }
        else if(x!=10 && y==10)
        {
            cifra(x,z);

            if(z==9)
            {
                cout << "DA";
            }
            else
            {
                cout << "NU";
            }
        }
        else
        {
            cifra(x,z1);
            cifra(y,z2);

            if(z1==z2)
            {
                cout << "DA";
            }
            else
            {
                cout << "NU";
            }
        }
    }

    return 0;
}
