// Sa se scrie o functie recursiva care calculeaza cate cifre are un numar natural N.
#include <iostream>
using namespace std;

int nc(int n){
    if(n<=9)
        return 1;
    else
        return nc(n/10)+1;
}

main(){
    cout << "Numarul de cifre al numarului dat este: " << nc(3347);
}
