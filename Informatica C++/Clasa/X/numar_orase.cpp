// Cunoscand nr. de locuitori din n orase, se doreste determinarea nr. de orase a caror populatie depaseste o valoare p specificata.
// La o singura executie a programului, poti fi specificate mai multe valori p pana la introducerea valorii 0, avand semnificatia sfarsit prelucrare.

#include <iostream>
using namespace std;

int main(){
    int i, n, o[50], p, k=0;

    cout << "Dati numarul de orase (N): "; cin >> n;

    cout << "Dati numarul de locuitori al fiecarui oras: " << endl;
    for(i=1;i<=n;i++)
    {
        cout << "O[" << i << "]: "; cin >> o[i];
    }

    do{
        cout << "Dati un numar pentru comparare cu populatia actuala (P): ";
        cin >> p;

        if(p!=0){

            for(i=1;i<=n;i++)
            {
                if(o[i]>p)
                k=k+1;
            }
        cout << "Numarul de orase care depaseste valoarea " << p << " este: " << k << endl;
        }
        else cout << "Sfarsit prelucrare.";
    }
    while(p!=0);
}
