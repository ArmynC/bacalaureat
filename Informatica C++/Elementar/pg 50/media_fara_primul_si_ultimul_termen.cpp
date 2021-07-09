#include <iostream>
using namespace std;

int main(){
    int n, a, i, min, max, suma, medie;

    cin >> n;
    cin >> a;

    min = max = a;

    suma = a;

    for(i=2;i<=n;i++){
        cin >> a;

        suma = suma+a;

        if(a>max)
            max = a;
        if(a<min)
            min = a;
    }

    medie = (suma-(max+min))/(n-2);

    cout << "Media este:" << medie;
}
