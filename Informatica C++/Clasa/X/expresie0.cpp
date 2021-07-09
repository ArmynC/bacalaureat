/* int a,b c
se citesc
E= a+b/2+c*a+b */

#include <iostream>
using namespace std;

main()
{
    int a, b, c, e;


    cout << "Introdu cele trei numere: ";
    cin >> a >> b >> c;

    e = a+b/2+c*a+b;

    cout << "Rezultatul ecuatiei este: " << e;

}
