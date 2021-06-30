#include <iostream>
#include <iomanip>

using namespace std;

void p(int n, int x[101], int &mini, int &maxi, int &sum)
{
    int i;

    maxi = -1;
    mini = 10000;
    sum = 0;

    for(i=1; i<=n; i++)
    {
        sum += x[i];

        if(maxi < x[i])
        {
            maxi = x[i];
        }

        if(mini > x[i])
        {
            mini = x[i];
        }
    }
}

int main()
{
    int n, x[101], i, mini, maxi, sum;
    double ma, nr;

    cin >> n;

    for(i=1; i<=n; i++)
    {
        cin >> x[i];
    }

    p(n, x, mini, maxi, sum);

    nr = n-2;

    ma = (sum-(mini+maxi))/nr;

    cout << fixed;
    cout << setprecision(3) << ma;

    return 0;
}
