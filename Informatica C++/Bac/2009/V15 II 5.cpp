#include <iostream>

using namespace std;

int main()
{
    int a[6][6], i, j, x;

    cin >> x;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            if(i==1)
            {
                a[i][j] = x%10;
            }
            else if(i==2)
            {
                a[i][j] = (x/10)%10;
            }
            else if(i==3)
            {
                a[i][j] = (x/100)%10;
            }
            else if(i==4)
            {
                a[i][j] = (x/1000)%10;
            }
            else
            {
                a[i][j] = (x/10000)%10;
            }
        }
    }

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
