#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, s, smin, p, neg;

    s = 0;
    smin = 1001;
    neg = 0;

    ifstream f("bac.txt");

    while(f>>x)
    {
        if(x<0)
        {
            neg++;
            if(neg==1)
            {
                p = x;
            }

            s = s+x;
        }
        else
        {
            if(s+x>p)
            {
                if(smin>s)
                {
                    smin = s;
                    s = 0;
                    neg = 0;
                }
                else
                {
                    s = 0;
                    neg = 0;
                }
            }
            else
            {
                s = s+x;
            }
        }

    }

    f.close();

    cout << smin;

    return 0;
}
