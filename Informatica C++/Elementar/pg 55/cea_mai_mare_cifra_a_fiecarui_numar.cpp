#include <iostream>
using namespace std;

int main()
{
    int a, n, i, cif, initial, cif_max;

    cin >> n;

    for(i=1; i<=n; i++)
    {

        cin >> a;

        cif_max = 0;
        initial = a;

        while(a!=0)
        {
            cif=a%10;
            if(cif_max<cif)
                cif_max = cif;
            a=a/10;
        }

        cout << "Cea mai mare cifra a lui " << initial << " este: " << cif_max << endl;
    }
}
