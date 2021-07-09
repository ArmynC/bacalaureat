#include <iostream>
using namespace std;

int main()
{
    int n, p, p_i, s, s_i, cif;

    cin >> n;

    s = s_i = 0;
    p = p_i = 1;

    while(n!=0)
    {
        cif=n%10;
        if(cif%2==0)
        {
            s = s + cif;
            p = p * cif;
        }
        else
        {
            s_i = s_i + cif;
            p_i = p_i * cif;
        }
        n=n/10;
    }

    cout << "Suma cifrelor pare: " << s << endl;
    cout << "Suma cifrelor impare: " << s_i << endl;
    cout << "Produsul cifrelor pare: " << p << endl;
    cout << "Produsul cifrelor impare: " << p_i;
}
