#include <iostream>
using namespace std;

int n, a[100];

int gasit(int x, int i)
{
    if(i>=n)
        return 0;
    else
        if(x==a[i])
            return 1;
        else
            return gasit(x,i+1);
}

main()
{
    int x, i;

    cout << "Dati numarul de vectori: ";
    cin >> n; cout << endl;

    for(i=1;i<=n;i++)
    {
        cout << "A[" << i << "]: ";
        cin >> a[i];
    }

    cout << endl << "Dati numarul cautat: ";
    cin >> x;

    if(gasit(x,0))
        cout << endl << "Numarul " << x << " se afla in tablou.";
    else
        cout << endl << "Nu s-a gasit numarul " << x << " in tablou.";
}
