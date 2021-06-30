#include <iostream>

using namespace std;

void divizor(int a, int &d)
{
    d = 2;

    while(a%d!=0)
    {
        d++;
    }
}

int main()
{
    int x, d;

    cin >> x;

    divizor(x,d);

    if(x==d)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}
