#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, y, ok, max;
	
	ifstream f("bac.txt");

    f >> y;

    cout << y << " ";

    ok = 1;
    max = y;

    while(f>>x)
    {
        if(x<y)
        {
            ok = 0;
            y = x;
        }
        else if(x==y)
        {
            if(ok==1)
            {
                cout << x << " ";

                ok = 1;
                max = x;
                y = x;
            }
            else
            {
                y = x;
                ok = 0;
            }
        }
        else
        {
            if(x>max)
            {
                ok = 1;

                cout << x << " ";

                max = x;
                y = x;
            }
            else
            {
                if(x==max)
                {
                    if(ok==1)
                    {
                        ok = 1;

                        cout << x << " ";

                        max = x;
                        y =x;
                    }
                    else
                    {
                        y = x;
                        ok = 0;
                    }
                }
                else
                {
                    y = x;
                    ok = 0;
                }
            }
        }
    }

    f.close();

    return 0;
}
