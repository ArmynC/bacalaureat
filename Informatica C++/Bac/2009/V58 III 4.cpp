#include <iostream>

using namespace std;

void divizor(int a, int &d)
{
    d = a/2;

    while(a%d!=0)
    {
        d--;
    }
}

int main()
{
    int x, d;

    cin >> x;

    divizor(x,d);

    if(d==1)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}
