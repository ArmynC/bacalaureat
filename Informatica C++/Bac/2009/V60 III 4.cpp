#include <iostream>

using namespace std;

void radical(int a, int &x)
{
    /// Algoritm prin care x devine partea intreaga a lui radical din a.

    x = 1;

    while(x*x<a)
    {
        x++;
    }

    if(x*x>a)
    {
        x--;
    }
}

int main()
{
    int n, x;

    cin >> n;

    radical(n,x);

    if(n==x*x)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}
