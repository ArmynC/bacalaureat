#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x, y, i, j, n1, n2;

	i = 1;
    j = 1;
	
    ifstream f1("bac1.txt");
    ifstream f2("bac2.txt");

    f1 >> n1;
    f2 >> n2;

    f1 >> x;
    f2 >> y;
    i++;
    j++;

    while(i<=n1 && j<=n2)
    {
        if(x<y)
        {
            if(x%5==0)
            {
                cout << x << " ";
                f1 >> x;
                i++;
            }
            else
            {
                f1 >> x;
                i++;
            }
        }
        else if(x==y)
        {
            f1 >> x;
            i++;
            f2 >> y;
            j++;
        }
        else
        {
            if(y%5==0)
            {
                cout << y << " ";
                f2 >> y;
                j++;
            }
            else
            {
                f2 >> y;
                j++;
            }
        }
    }

    if(i<=n1)
    {
        f2.close();

        if(x%5==0)
        {
            cout << x << " ";
        }

        while(i<=n1)
        {
            f1 >> x;
            if(x%5==0)
            {
                cout << x << " ";
            }
        }

        f1.close();
    }
    else if(j<=n2)
    {
        f1.close();

        if(y%5==0)
        {
            cout << y << " ";
        }

        while(j<=n2)
        {
            f2 >> y;
            if(y%5==0)
            {
                cout << y << " ";
            }
        }

        f2.close();
    }
    else
    {
        if(x==y) ;
        else if(x<y)
        {
            if(x%5==0)
            {
                cout << x << " ";
            }
            else
            {
                if(y%5==0)
                {
                    cout << y << " ";
                }
            }
        }
        else
        {
            if(y%5==0)
            {
                cout << y << " ";
            }
            else
            {
                if(x%5==0)
                {
                    cout << x << " ";
                }
            }
        }
    }

    return 0;
}
