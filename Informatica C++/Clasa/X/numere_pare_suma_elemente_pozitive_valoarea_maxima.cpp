// Se citesc de la tastatura N numere intregi. Sa se calculeze cate numere pare sunt, suma elementelor pozitive si valoarea maxima.

#include <iostream>
using namespace std;

int main(){
    int i, n, a, par=0, sum=0, max=0;

    cout << "Introdu numarul de numere (N): "; cin >> n;

    for(i=1;i<=n;i++)
    {
        cout << "Introduceti numerele: ";
        cin >> a;

        if(a%2==0)
            par++;

        if(n>0)
            sum=sum+a;

        if(n>max)
            max = n;
    }
    cout << "Numarul de numere pare este:" << par << ", suma elementelor pozitive este:" << sum << " si valoaera maxima este:" << max;
}

