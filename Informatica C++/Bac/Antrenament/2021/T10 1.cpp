#include <iostream>

using namespace std;

int armonie(int x, int y)
{
    int sx, sy, d;

    sx = 0;
    sy = 0;

    for(d=1; d<=x; d++)
    {
        if(x%d==0)
        {
            sx = sx+d;
        }
    }

    for(d=1; d<=y; d++)
    {
        if(y%d==0)
        {
            sy = sy+d;
        }
    }

    if((x+y>sx && x+y<sy && sx<sy) || (x+y>sy && x+y<sx && sy<sx))
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    int x, y;

    cin >> x >> y;

    cout << armonie(x,y);

    return 0;
}
