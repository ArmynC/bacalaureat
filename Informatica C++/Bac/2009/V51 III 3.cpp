#include <iostream>
#include <fstream>

using namespace std;

int divizor(int a)
{
    int d;

    d = 2;

    while(a%d!=0)
    {
        d++;
    }

    return d;
}

int main()
{
    int n, i, x, s;

    s = 0;
	
    ifstream f("date.in");

    f >> n;

    for(i=1; i<=n; i++)
    {
        f >> x;
        s += divizor(x);
    }

    f.close();

    cout << s;

    return 0;
}
