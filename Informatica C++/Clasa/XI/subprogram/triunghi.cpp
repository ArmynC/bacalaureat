/* Sa se scrie o functie recursiva care primeste un paramentru N natural si afiseaza triunghiul
1
1 2
1 2 3
.....
1 2 3 4 n ...
*/

#include <iostream>
using namespace std;

void afis(int n){
    if(n>0){
        afis(n-1);
            for(int i=1;i<=n;i++)
                cout << i << " ";
                    cout << endl;
    }
}

main(){
    afis(10);
}
