#include <iostream>
using namespace std;
int main(){
    long n;
    int cifra;
    cout << "Cifra:"; cin >> cifra;
    n=0;
    while(cifra>=0 && cifra<=9)
    {
        n=n*10+cifra;
        cout << "Cifra:";
        cin >> cifra;
    }
    cout << "Numarul obtinut este " << n << ".";
}
