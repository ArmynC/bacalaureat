// Se da nr. nat. nenul ce rep. un interval de timp exprimat in sec.
// Sa se trans. intervalul in ore, min., sec.
// Ex. s=4536 -> 1 ora 15 min 36 sec.

#include <iostream>
#include <math.h>
using namespace std;

main(){
    int n, o, m, s;

    cout << "Introdu numarul: "; cin >> n;

    o=n/3600;
    m=(n/60)%60;
    s=n%60;

    cout << "Ora: " << o << endl;
    cout << "Minutele: " << m << endl;
    cout << "Secundele: " << s << endl;

}
