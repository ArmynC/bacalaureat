#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int p1, p2, a, b, c, f, g, x, d1, d2;

    cin >> p1 >> p2;

    ofstream afis("bac.out");

    for(d1=1; d1<=9; d1++)
    {
        for(c=9; c>=0; c--)
        {
            for(d2=1; d2<=9; d2++)
            {
                if(p1%d1==0 && p2%d2==0 && p1/d1<=9 && p2/d2<=9)
                {
                    a = p1/d1;
                    b = d1;

                    f = p2/d2;
                    g = d2;

                    x = a*1000000+b*100000+c*10000+c*1000+c*100+f*10+g;

                    afis << x << endl;
                }
            }
        }
    }

    afis.close();

    return 0;
}
