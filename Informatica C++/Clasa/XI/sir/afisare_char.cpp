// Ce se va afisa in urma executiei urmatoarei secvente de program:
#include <iostream>
#include <string.h>
using namespace std;

main(){
    char sir[2][10]={"alfa","beta"};

    if(sir[0]<sir[1])
        cout << sir[0];
    else cout << sir[1];
}
