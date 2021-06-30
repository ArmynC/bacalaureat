#include <iostream>

using namespace std;

int identice(int n)
{
    int cif, cn, ok;

    ok = 1;
    cn = n%10;

    while(n>0 && ok==1)
    {
        cif = n%10;

        if(cif!=cn)
        {
            ok = 0;
        }
        else
        {
            n = n/10;
        }
    }

    if(ok==1)
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
    int n;

    cin >> n;

    cout << identice(n);

    return 0;
}
