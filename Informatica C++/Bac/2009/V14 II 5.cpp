#include <iostream>

using namespace std;

int main()
{
    int a[5][5], i, j, x;

    cin >> x;

    for(j=1; j<=4; j++)
    {
        for(i=1; i<=4; i++)
        {
            if(j==1)
            {
                a[i][j] = x%10;
            }
            else if(j==2)
            {
                a[i][j] = (x/10)%10;
            }
            else if(j==3)
            {
                a[i][j] = (x/100)%10;
            }
            else
            {
                a[i][j] = (x/1000)%10;
            }
        }
    }

    for(i=1; i<=4; i++)
    {
        for(j=1; j<=4; j++)
        {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
