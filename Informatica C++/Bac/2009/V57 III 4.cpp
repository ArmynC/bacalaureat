#include <iostream>

using namespace std;

int multiplu(int a, int k)
{
    int i;

    if(a%k==0)
    {
        i = a/k;
    }
    else
    {
        i = a/k+1;
    }

    return i*k;
}

int main()
{
    int x, y, z, m;

    cin >> x >> y >> z;

    m = multiplu(x,z);

    if(m>y)
    {
        cout << "NU";
    }
    else
    {
        cout << "DA";
    }

    return 0;
}
